NAME = bank

CC = c++

CFLAG = -Wall -Wextra -Werror -MMD -g
CFLAG += -std=c++98

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $@  
-include $(DEP)

all: $(NAME)

clean:
	rm -rf $(DEP) $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re