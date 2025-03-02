NAME = megaphone

CC = c++

CFLAG = -Wall -Wextra -Werror
CFLAG += -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re all