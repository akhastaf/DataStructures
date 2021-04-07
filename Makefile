C = gcc
FLAG = -Wall -Wextra -Werror
NAME = datastructures.a

SRC = srcs/stack.c srcs/queue.c

OBJ = stack.o queue.o


all: $(NAME)

$(NAME):
	$(C) $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all