#ifndef TEST_H
# define TEST_H

# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>

# include <bsd/string.h>

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
#  define ft_toupper toupper
#  define ft_tolower tolower 
#  define ft_strchr strchr 
#  define ft_strrchr strrchr 
#  define ft_strncmp strncmp
#  define ft_memchr memchr
#  define ft_memcmp memcmp
#  define ft_strnstr strnstr
#  define ft_atoi atoi
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

extern int	malloc_time;

#endif
