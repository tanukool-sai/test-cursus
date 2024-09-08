CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -L.
LIB_FLAGS = -lft -lbsd

all:
	$(CC) $(CFLAGS) main.c $(LIB_FLAGS) -o main
	@-./main
	@rm -f main


real:
	$(CC) $(CFLAGS) -D LIBC main.c $(LIB_FLAGS) -o main
	@-./main
	@rm -f main

debug:
	$(CC) $(CFLAGS) -D DEBUG=1 main.c $(LIB_FLAGS) -o main
	@-./main
	@rm -f main
