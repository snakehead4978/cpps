NAME = ASK

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -MMD -MP
CFLAGS += -std=c++98

INC = -Iinclude

vpath %.cpp src

OBJ_DIR = obj/

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $^ -o $@
-include $(OBJ:.o=.d)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
