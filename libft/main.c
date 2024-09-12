#include "test.h"

char	s[50];

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
	ASSERT(memcmp(ft_memset(strcpy(s, "abc"), 'a', 3), "aaa", 3) == 0);
	ASSERT(memcmp(ft_memset(strcpy(s, "abcde"), 'a', 3), "aaade", 5) == 0);
	ASSERT(memcmp(ft_memset(strcpy(s, "abcde"), 'a', 1), "abcde", 5) == 0);
	ASSERT(memcmp(ft_memset(strcpy(s, "abcde"), 'a', 5), "aaaaa", 5) == 0);

	// memset size cannot be 0, get warning memset-transposed-args
	#ifndef LIBC
		ASSERT(strncmp(ft_memset(strcpy(s, "abcde"), 'a', 0), "abcde", 5) == 0);
	#endif

}

void	test_bzero(void)
{
	printf("TEST: bzero\n");
	ASSERT(memcmp((strcpy(s, "abc"), ft_bzero(s, 0), s), "abc", 3) == 0);
	ASSERT(memcmp((strcpy(s, "abc"), ft_bzero(s, 3), s), "\0\0\0", 3) == 0);
	ASSERT(memcmp((strcpy(s, "abcde"), ft_bzero(s, 3), s), "\0\0\0de", 5) == 0);
}

void	test_memcpy(void)
{
	printf("TEST: memcpy\n");
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 0), "abc", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 1), "1bc", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 2), "12c", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 3), "123", 3) == 0);
}

void	test_memmove(void)
{
	printf("TEST: memmove\n");
	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde"), s + 2, 0), "abcde", 5) == 0);
	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde") + 2, s, 0) - 2, "abcde", 5) == 0);

	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde"), s + 2, 1), "cbcde", 5) == 0);
	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde") + 2, s, 1) - 2, "abade", 5) == 0);

	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde"), s + 2, 2), "cdcde", 5) == 0);
	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde") + 2, s, 2) - 2, "ababe", 5) == 0);

	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde") + 2, s, 3) - 2, "ababc", 5) == 0);
	ASSERT(memcmp(ft_memmove(strcpy(s, "abcde"), s + 2, 3), "cdede", 5) == 0);
}

void	test_strlcpy(void)
{
	printf("TEST: strlcpy\n");
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "", 0) == 0 && memcmp(s, "abc", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "", 1) == 0 && memcmp(s, "\0bc", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "", 2) == 0 && memcmp(s, "\0bc", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "", 3) == 0 && memcmp(s, "\0bc", 4) == 0);

	ASSERT(ft_strlcpy(strcpy(s, "abc"), "123", 0) == 3 && memcmp(s, "abc", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "123", 1) == 3 && memcmp(s, "\0bc", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "123", 2) == 3 && memcmp(s, "1\0c", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "1234", 3) == 4 && memcmp(s, "12\0", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "1234", 4) == 4 && memcmp(s, "123", 4) == 0);
	ASSERT(ft_strlcpy(strcpy(s, "abc"), "1234", 5) == 4 && memcmp(s, "1234", 5) == 0);
}

void	test_strlcat(void)
{
	printf("TEST: strlcat\n");
	ASSERT(ft_strlcat(strcpy(s, ""), "", 0) == 0 && strcmp(s, "") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "", 1) == 0 && strcmp(s, "") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "", 2) == 0 && strcmp(s, "") == 0);

	ASSERT(ft_strlcat(strcpy(s, "abc"), "", 0) == 0 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "", 1) == 1 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "", 2) == 2 && strcmp(s, "abc") == 0);

	ASSERT(ft_strlcat(strcpy(s, ""), "abc", 0) == 3 && strcmp(s, "") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "abc", 1) == 3 && strcmp(s, "") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "abc", 2) == 3 && strcmp(s, "a") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "abc", 3) == 3 && strcmp(s, "ab") == 0);
	ASSERT(ft_strlcat(strcpy(s, ""), "abc", 4) == 3 && strcmp(s, "abc") == 0);

 	// Return value = min(len(dst), dstsize) + len(src)
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 0) == 4 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 1) == 5 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 2) == 6 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 3) == 7 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 4) == 7 && strcmp(s, "abc") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 5) == 7 && strcmp(s, "abc1") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 6) == 7 && strcmp(s, "abc12") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 7) == 7 && strcmp(s, "abc123") == 0);
	ASSERT(ft_strlcat(strcpy(s, "abc"), "1234", 8) == 7 && strcmp(s, "abc1234") == 0);
}

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
}
