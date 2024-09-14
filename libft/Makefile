CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -L.

LIB_FLAGS = -lft
ifeq ($(shell uname), Linux)
	LIB_FLAGS += -lbsd
endif

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

mem:
	$(CC) $(CFLAGS) main.c $(LIB_FLAGS) -o main
	@-valgrind --leak-check=full ./main
	@rm -f main
