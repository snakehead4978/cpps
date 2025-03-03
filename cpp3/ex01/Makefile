NAME = baroness

CC = c++

CFLAG = -Wall -Wextra -Werror -g3 -MMD -MP
CFLAG += -std=c++98

INC = -Iincludes

vpath %.cpp src

OBJ_DIR = obj/

SRC = ClapTrap.cpp main.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAG) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(INC) $^ -o $@
-include $(OBJ:.o=.d)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
