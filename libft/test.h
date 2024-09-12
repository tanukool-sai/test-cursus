#ifndef TEST_H
# define TEST_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>

# include "libft.h"

# ifdef LIBC
#  define ft_isalpha isalpha
#  define ft_isdigit isdigit
#  define ft_isalnum isalnum
#  define ft_isascii isascii
#  define ft_isprint isprint
#  define ft_strlen strlen
#  define ft_memset memset
#  define ft_bzero bzero
#  define ft_memcpy memcpy
#  define ft_memmove memmove
#  define ft_strlcpy strlcpy
#  define ft_strlcat strlcat
# endif

# ifndef DEBUG
#  define DEBUG 0
# endif

# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_RESET   "\x1b[0m"

# define ASSERT(test) { \
	if (test) { \
		if (DEBUG) { \
			printf(COLOR_GREEN "PASSED: %s" COLOR_RESET "\n", #test); \
		} \
	} else { \
		dprintf(2, COLOR_RED "FAILED: %s" COLOR_RESET "\n", #test); \
	} \
}

#endif
