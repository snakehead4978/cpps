NAME = telephone

CC = c++

CFLAG = -Wall -Wextra -Werror -g -MMD
CFLAG += -std=c++98

SRC = PhoneBook.cpp Contact.cpp Main.cpp Misc.cpp

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

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

.PHONY: fclean all clean re