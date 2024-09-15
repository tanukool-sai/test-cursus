CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -L.

LIB_FLAGS = -lft


SRC = main.c ft_malloc.c
NAME = main

all:
	$(CC) $(CFLAGS) $(SRC) $(LIB_FLAGS) -o $(NAME)
	@-./$(NAME)
	@rm -f $(NAME) 

real:
	$(CC) $(CFLAGS) -D LIBC $(SRC) $(LIB_FLAGS) -o $(NAME)
	@-./$(NAME)
	@rm -f $(NAME)

debug:
	$(CC) $(CFLAGS) -D DEBUG=1 $(SRC) $(LIB_FLAGS) -o $(NAME)
	@-./$(NAME)
	@rm -f $(NAME)

mem:
	$(CC) $(CFLAGS) -D MALLOC $(SRC) $(LIB_FLAGS) -o $(NAME)
	@-valgrind --leak-check=full ./$(NAME)
	@rm -f $(NAME)
