NAME = army

CC = c++

CFLAG = -Wall -Wextra -Werror -g3 -MMD
CFLAG += -std=c++98

SRC = HumanA.cpp main.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $@
-include $(DEP)

all: $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re