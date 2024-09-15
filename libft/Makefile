CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -L.

LIB_FLAGS = -H -lft


SRC = main.c
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
	$(CC) $(CFLAGS) -D MALLOC=10 $(SRC) $(LIB_FLAGS) -o $(NAME)
	@-valgrind --leak-check=full ./$(NAME)
	@rm -f $(NAME)
