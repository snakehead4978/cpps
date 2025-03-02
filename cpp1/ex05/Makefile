NAME = karen

CC = c++

INC = -Iincludes

CFLAG = -Wall -Wextra -Werror -g3 -MMD -MP
CFLAG += -std=c++98

SRC = Harl.cpp main.cpp

vpath %.cpp src

OBJ_DIR = obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(INC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(INC) $(CFLAG) $^ -o $@
-include $(OBJ:.o=.d)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
