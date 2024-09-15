CC = cc
CFLAGS = -Wall -Wextra -Werror -g

LIB_FLAGS = -lft -lbsd

SRC =  main.c ft_malloc.c
NAME = main

all: $(NAME) run-mem fclean

$(NAME): ft_malloc.so
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) libft.a

run:
	@-LD_PRELOAD=$(shell pwd)/ft_malloc.so ./$(NAME)

run-mem:
	@-valgrind --soname-synonyms=somalloc=ft_malloc.so --leak-check=full ./$(NAME)

ft_malloc.so:
	cc -shared -o ft_malloc.so -fPIC ft_malloc.c

fclean:
	@rm -f $(NAME) 

#real:
#	$(CC) $(CFLAGS) -D LIBC $(SRC) $(LIB_FLAGS) -o $(NAME)
#	@-./$(NAME)
#	@rm -f $(NAME)
#
#debug:
#	$(CC) $(CFLAGS) -D DEBUG=1 $(SRC) $(LIB_FLAGS) -o $(NAME)
#	@-./$(NAME)
#	@rm -f $(NAME)
#
#mem:
#	$(CC) $(CFLAGS) -D MALLOC $(SRC) $(LIB_FLAGS) -o $(NAME)
#	@-valgrind --leak-check=full ./$(NAME)
#	@rm -f $(NAME)
