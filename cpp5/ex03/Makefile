NAME = bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -MMD
CFLAGS += -std=c++98

INC = -I.

SRC_FILES = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRC_FILES:.cpp=.o)

DEP = $(OBJ:.o=.d)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INC) $^ -o $@
-include $(DEP)

all: $(NAME)

clean:
	rm -rf $(OBJ) $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	clear
	./$(NAME)

valg: re
	clear
	valgrind ./$(NAME)

.PHONY: all re clean fclean