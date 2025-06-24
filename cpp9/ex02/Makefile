NAME = PmergeMe

CC = c++

CFLAGS = -Wall -Wextra -Werror -g3 -MMD
CFLAGS += -std=c++98

INC = -I.

OBJ_DIR = obj/

SRC_FILES = main.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

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

test: re
	clear
	./$(NAME)

valg: re
	clear
	valgrind ./$(NAME)

.PHONY: all re clean fclean