#include "test.h"

void	test_isalpha(void)
{
	printf("TEST: isalpha\n");
	// True
	ASSERT(ft_isalpha('a') != 0);
	ASSERT(ft_isalpha('b') != 0);
	ASSERT(ft_isalpha('c') != 0);
	ASSERT(ft_isalpha('z') != 0);
	ASSERT(ft_isalpha('A') != 0);
	ASSERT(ft_isalpha('B') != 0);
	ASSERT(ft_isalpha('C') != 0);
	ASSERT(ft_isalpha('Z') != 0);

	// False
	ASSERT(ft_isalpha(' ') == 0);
	ASSERT(ft_isalpha('\0') == 0);
	ASSERT(ft_isalpha('\x12') == 0);
	ASSERT(ft_isalpha('\t') == 0);
	ASSERT(ft_isalpha('~') == 0);
	ASSERT(ft_isalpha('!') == 0);
	ASSERT(ft_isalpha('\x01') == 0);
	ASSERT(ft_isalpha('\x02') == 0);
	ASSERT(ft_isalpha('"') == 0);
	ASSERT(ft_isalpha('#') == 0);
	ASSERT(ft_isalpha('$') == 0);
	ASSERT(ft_isalpha('%') == 0);
	ASSERT(ft_isalpha('*') == 0);
	ASSERT(ft_isalpha('+') == 0);
}

void	test_isdigit(void)
{
	printf("TEST: isdigit\n");
	// True
	ASSERT(ft_isdigit('0') != 0);
	ASSERT(ft_isdigit('1') != 0);
	ASSERT(ft_isdigit('2') != 0);
	ASSERT(ft_isdigit('3') != 0);
	ASSERT(ft_isdigit('4') != 0);
	ASSERT(ft_isdigit('5') != 0);
	ASSERT(ft_isdigit('6') != 0);
	ASSERT(ft_isdigit('7') != 0);
	ASSERT(ft_isdigit('8') != 0);
	ASSERT(ft_isdigit('9') != 0);

	// False
	ASSERT(ft_isdigit(' ') == 0);
	ASSERT(ft_isdigit('\0') == 0);
	ASSERT(ft_isdigit('\x12') == 0);
	ASSERT(ft_isdigit('\t') == 0);
	ASSERT(ft_isdigit('~') == 0);
	ASSERT(ft_isdigit('!') == 0);
	ASSERT(ft_isdigit('\x01') == 0);
	ASSERT(ft_isdigit('\x02') == 0);
	ASSERT(ft_isdigit('"') == 0);
	ASSERT(ft_isdigit('#') == 0);
	ASSERT(ft_isdigit('$') == 0);
	ASSERT(ft_isdigit('%') == 0);
	ASSERT(ft_isdigit('*') == 0);
	ASSERT(ft_isdigit('+') == 0);

	ASSERT(ft_isdigit('a') == 0);
	ASSERT(ft_isdigit('b') == 0);
	ASSERT(ft_isdigit('c') == 0);
	ASSERT(ft_isdigit('z') == 0);
	ASSERT(ft_isdigit('A') == 0);
	ASSERT(ft_isdigit('B') == 0);
	ASSERT(ft_isdigit('C') == 0);
	ASSERT(ft_isdigit('Z') == 0);
}

void	test_isalnum(void)
{
	printf("TEST: isalnum\n");
	// True
	ASSERT(ft_isalnum('0') != 0);
	ASSERT(ft_isalnum('1') != 0);
	ASSERT(ft_isalnum('2') != 0);
	ASSERT(ft_isalnum('3') != 0);
	ASSERT(ft_isalnum('4') != 0);
	ASSERT(ft_isalnum('5') != 0);
	ASSERT(ft_isalnum('6') != 0);
	ASSERT(ft_isalnum('7') != 0);
	ASSERT(ft_isalnum('8') != 0);
	ASSERT(ft_isalnum('9') != 0);

	ASSERT(ft_isalnum('a') != 0);
	ASSERT(ft_isalnum('b') != 0);
	ASSERT(ft_isalnum('c') != 0);
	ASSERT(ft_isalnum('z') != 0);
	ASSERT(ft_isalnum('A') != 0);
	ASSERT(ft_isalnum('B') != 0);
	ASSERT(ft_isalnum('C') != 0);
	ASSERT(ft_isalnum('Z') != 0);

	// False
	ASSERT(ft_isalnum(' ') == 0);
	ASSERT(ft_isalnum('\0') == 0);
	ASSERT(ft_isalnum('\x12') == 0);
	ASSERT(ft_isalnum('\t') == 0);
	ASSERT(ft_isalnum('~') == 0);
	ASSERT(ft_isalnum('!') == 0);
	ASSERT(ft_isalnum('\x01') == 0);
	ASSERT(ft_isalnum('\x02') == 0);
	ASSERT(ft_isalnum('"') == 0);
	ASSERT(ft_isalnum('#') == 0);
	ASSERT(ft_isalnum('$') == 0);
	ASSERT(ft_isalnum('%') == 0);
	ASSERT(ft_isalnum('*') == 0);
	ASSERT(ft_isalnum('+') == 0);
}

void	test_isascii(void)
{
	printf("TEST: isascii\n");
	// True
	ASSERT(ft_isascii('0') != 0);
	ASSERT(ft_isascii('1') != 0);
	ASSERT(ft_isascii('2') != 0);
	ASSERT(ft_isascii('3') != 0);
	ASSERT(ft_isascii('4') != 0);
	ASSERT(ft_isascii('5') != 0);
	ASSERT(ft_isascii('6') != 0);
	ASSERT(ft_isascii('7') != 0);
	ASSERT(ft_isascii('8') != 0);
	ASSERT(ft_isascii('9') != 0);
	ASSERT(ft_isascii('a') != 0);
	ASSERT(ft_isascii('b') != 0);
	ASSERT(ft_isascii('c') != 0);
	ASSERT(ft_isascii('z') != 0);
	ASSERT(ft_isascii('A') != 0);
	ASSERT(ft_isascii('B') != 0);
	ASSERT(ft_isascii('C') != 0);
	ASSERT(ft_isascii('Z') != 0);
	ASSERT(ft_isascii('~') != 0);
	ASSERT(ft_isascii('!') != 0);
	ASSERT(ft_isascii(' ') != 0);
	ASSERT(ft_isascii('"') != 0);
	ASSERT(ft_isascii('#') != 0);
	ASSERT(ft_isascii('$') != 0);
	ASSERT(ft_isascii('%') != 0);
	ASSERT(ft_isascii('*') != 0);
	ASSERT(ft_isascii('+') != 0);
	ASSERT(ft_isascii('\0') != 0);
	ASSERT(ft_isascii('\x12') != 0);
	ASSERT(ft_isascii('\t') != 0);
	ASSERT(ft_isascii('\x01') != 0);
	ASSERT(ft_isascii('\x02') != 0);
	ASSERT(ft_isascii('\x7f') != 0);

	// False
	ASSERT(ft_isascii(-123) == 0);
	ASSERT(ft_isascii(-1) == 0);
	ASSERT(ft_isascii(-57) == 0);
	ASSERT(ft_isascii(-97) == 0);
}

void	test_isprint(void)
{
	printf("TEST: isprint\n");
	// True
	ASSERT(ft_isprint('0') != 0);
	ASSERT(ft_isprint('1') != 0);
	ASSERT(ft_isprint('2') != 0);
	ASSERT(ft_isprint('3') != 0);
	ASSERT(ft_isprint('4') != 0);
	ASSERT(ft_isprint('5') != 0);
	ASSERT(ft_isprint('6') != 0);
	ASSERT(ft_isprint('7') != 0);
	ASSERT(ft_isprint('8') != 0);
	ASSERT(ft_isprint('9') != 0);
	ASSERT(ft_isprint('a') != 0);
	ASSERT(ft_isprint('b') != 0);
	ASSERT(ft_isprint('c') != 0);
	ASSERT(ft_isprint('z') != 0);
	ASSERT(ft_isprint('A') != 0);
	ASSERT(ft_isprint('B') != 0);
	ASSERT(ft_isprint('C') != 0);
	ASSERT(ft_isprint('Z') != 0);
	ASSERT(ft_isprint('~') != 0);
	ASSERT(ft_isprint('!') != 0);
	ASSERT(ft_isprint(' ') != 0);
	ASSERT(ft_isprint('"') != 0);
	ASSERT(ft_isprint('#') != 0);
	ASSERT(ft_isprint('$') != 0);
	ASSERT(ft_isprint('%') != 0);
	ASSERT(ft_isprint('*') != 0);
	ASSERT(ft_isprint('+') != 0);

	// False
	ASSERT(ft_isprint('\0') == 0);
	ASSERT(ft_isprint('\x12') == 0);
	ASSERT(ft_isprint('\t') == 0);
	ASSERT(ft_isprint('\x01') == 0);
	ASSERT(ft_isprint('\x02') == 0);
	ASSERT(ft_isprint('\x7f') == 0);
}

void	test_strlen(void)
{
	printf("TEST: strlen\n");
	ASSERT(ft_strlen("") == 0);
	ASSERT(ft_strlen("h") == 1);
	ASSERT(ft_strlen("hello") == 5);
	ASSERT(ft_strlen("\x12\0\t\v asdf") == 1);
	ASSERT(ft_strlen("\x12\t\v asdf") == 8);
}

void	test_memset(void)
{
	printf("TEST: memset\n");
	ASSERT(strncmp(ft_memset((char[]){'a','b','c',0}, 'a', 3), "aaa", 3) == 0);
	ASSERT(strncmp(ft_memset((char[]){'a','b','c','d','e',0}, 'a', 3), "aaade", 5) == 0);
	ASSERT(strncmp(ft_memset((char[]){'a','b','c','d','e',0}, 'a', 1), "abcde", 5) == 0);

	// memset size cannot be 0, get warning memset-transposed-args
	// ASSERT(strncmp(ft_memset((char[]){'a','b','c','d','e',0}, 'a', 0), "abcde", 5) == 0);
}

void	test_bzero(void)
{
	char	*s;

	printf("TEST: bzero\n");
	ASSERT(strncmp((s=(char[]){'a','b','c', 0}, ft_bzero(s, 3), s), "\0\0\0", 3) == 0);
}

void	test_memcpy(void)
{
	char s[50];

	printf("TEST: memcpy\n");
	ASSERT(strncmp(ft_memcpy(s, "abc", 3), "abc", 3) == 0);
}

void	test_memmove(void)
{
	char s[50];

	printf("TEST: memmove\n");
	ASSERT(strncmp(ft_memmove(s, "abc", 3), "abc", 3) == 0);
}

void	test_strlcpy(void)
{
	char s[50];

	printf("TEST: strlcpy\n");
	ASSERT(ft_strlcpy(s, "abc", 4) == 3 && strncmp(s, "abc", 3) == 0);
}

void	test_strlcat(void)
{
	char	*s;

	printf("TEST: strlcat\n");
	ASSERT(ft_strlcat((s=(char[7]){'a','b','c',0}), "abc", 7) == 6 && \
			strncmp(s, "abcabc", 6) == 0);
}

#include <stdlib.h>
#include <limits.h>
int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	//test_bzero();
	//test_memcpy();
	//test_memmove();
	//test_strlcpy();
	//test_strlcat();
	//malloc(INT_MAX + 2); 
}
