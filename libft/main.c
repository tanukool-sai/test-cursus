#include "libft.h"
#include "test.h"

char	s[50];

void	print_test_name(const char *func_name)
{
	printf("TEST: %s\n", func_name + 5); // + 5 to trimmed test_ prefix
}

void	test_isalpha(void)
{
	print_test_name(__func__);
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
	print_test_name(__func__);
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
	print_test_name(__func__);
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
	print_test_name(__func__);
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
	print_test_name(__func__);
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
	print_test_name(__func__);
	ASSERT(ft_strlen("") == 0);
	ASSERT(ft_strlen("h") == 1);
	ASSERT(ft_strlen("hello") == 5);
	ASSERT(ft_strlen("\x12\0\t\v asdf") == 1);
	ASSERT(ft_strlen("\x12\t\v asdf") == 8);
}

void	test_memset(void)
{
	print_test_name(__func__);
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
	print_test_name(__func__);
	ASSERT(memcmp((strcpy(s, "abc"), ft_bzero(s, 3), s), "\0\0\0", 3) == 0);
	ASSERT(memcmp((strcpy(s, "abcde"), ft_bzero(s, 3), s), "\0\0\0de", 5) == 0);

	// error: 'size' argument to bzero is '0' [-Werror,-Wsuspicious-bzero]
	#ifndef LIBC
		ASSERT(memcmp((strcpy(s, "abc"), ft_bzero(s, 0), s), "abc", 3) == 0);
	#endif
}

void	test_memcpy(void)
{
	print_test_name(__func__);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 0), "abc", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 1), "1bc", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 2), "12c", 3) == 0);
	ASSERT(memcmp(ft_memcpy(strcpy(s, "abc"), "123", 3), "123", 3) == 0);

	// bzero size cannot be 0, get warning memset-transposed-args
	#ifndef LIBC
		ASSERT(strncmp(ft_memset(strcpy(s, "abcde"), 'a', 0), "abcde", 5) == 0);
	#endif
}

void	test_memmove(void)
{
	print_test_name(__func__);
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
	print_test_name(__func__);
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
	print_test_name(__func__);
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

void	test_toupper(void)
{
	print_test_name(__func__);
	// Input: lowercase 
	ASSERT(ft_toupper('a') == 'A');
	ASSERT(ft_toupper('b') == 'B');
	ASSERT(ft_toupper('c') == 'C');
	ASSERT(ft_toupper('d') == 'D');
	ASSERT(ft_toupper('e') == 'E');
	ASSERT(ft_toupper('f') == 'F');
	ASSERT(ft_toupper('m') == 'M');
	ASSERT(ft_toupper('n') == 'N');
	ASSERT(ft_toupper('q') == 'Q');
	ASSERT(ft_toupper('z') == 'Z');

	// Input: uppercase
	ASSERT(ft_toupper('A') == 'A');
	ASSERT(ft_toupper('B') == 'B');
	ASSERT(ft_toupper('C') == 'C');
	ASSERT(ft_toupper('D') == 'D');
	ASSERT(ft_toupper('E') == 'E');
	ASSERT(ft_toupper('F') == 'F');
	ASSERT(ft_toupper('M') == 'M');
	ASSERT(ft_toupper('N') == 'N');
	ASSERT(ft_toupper('Q') == 'Q');
	ASSERT(ft_toupper('Z') == 'Z');

	// Input: special character
	ASSERT(ft_toupper('0') == '0');
	ASSERT(ft_toupper('1') == '1');
	ASSERT(ft_toupper('2') == '2');
	ASSERT(ft_toupper('3') == '3');
	ASSERT(ft_toupper('4') == '4');
	ASSERT(ft_toupper('5') == '5');
	ASSERT(ft_toupper('6') == '6');
	ASSERT(ft_toupper('7') == '7');
	ASSERT(ft_toupper('8') == '8');
	ASSERT(ft_toupper('9') == '9');
	ASSERT(ft_toupper(' ') == ' ');
	ASSERT(ft_toupper('\0') == '\0');
	ASSERT(ft_toupper('\x12') == '\x12');
	ASSERT(ft_toupper('\t') == '\t');
	ASSERT(ft_toupper('~') == '~');
	ASSERT(ft_toupper('!') == '!');
	ASSERT(ft_toupper('\x01') == '\x01');
	ASSERT(ft_toupper('\x02') == '\x02');
	ASSERT(ft_toupper('"') == '"');
	ASSERT(ft_toupper('#') == '#');
	ASSERT(ft_toupper('$') == '$');
	ASSERT(ft_toupper('%') == '%');
	ASSERT(ft_toupper('*') == '*');
	ASSERT(ft_toupper('+') == '+');
}

void	test_tolower(void)
{
	print_test_name(__func__);
	// Input: lowercase 
	ASSERT(ft_tolower('a') == 'a');
	ASSERT(ft_tolower('b') == 'b');
	ASSERT(ft_tolower('c') == 'c');
	ASSERT(ft_tolower('d') == 'd');
	ASSERT(ft_tolower('e') == 'e');
	ASSERT(ft_tolower('f') == 'f');
	ASSERT(ft_tolower('m') == 'm');
	ASSERT(ft_tolower('n') == 'n');
	ASSERT(ft_tolower('q') == 'q');
	ASSERT(ft_tolower('z') == 'z');

	// Input: uppercase
	ASSERT(ft_tolower('A') == 'a');
	ASSERT(ft_tolower('B') == 'b');
	ASSERT(ft_tolower('C') == 'c');
	ASSERT(ft_tolower('D') == 'd');
	ASSERT(ft_tolower('E') == 'e');
	ASSERT(ft_tolower('F') == 'f');
	ASSERT(ft_tolower('M') == 'm');
	ASSERT(ft_tolower('N') == 'n');
	ASSERT(ft_tolower('Q') == 'q');
	ASSERT(ft_tolower('Z') == 'z');

	// Input: special character
	ASSERT(ft_tolower('0') == '0');
	ASSERT(ft_tolower('1') == '1');
	ASSERT(ft_tolower('2') == '2');
	ASSERT(ft_tolower('3') == '3');
	ASSERT(ft_tolower('4') == '4');
	ASSERT(ft_tolower('5') == '5');
	ASSERT(ft_tolower('6') == '6');
	ASSERT(ft_tolower('7') == '7');
	ASSERT(ft_tolower('8') == '8');
	ASSERT(ft_tolower('9') == '9');
	ASSERT(ft_tolower(' ') == ' ');
	ASSERT(ft_tolower('\0') == '\0');
	ASSERT(ft_tolower('\x12') == '\x12');
	ASSERT(ft_tolower('\t') == '\t');
	ASSERT(ft_tolower('~') == '~');
	ASSERT(ft_tolower('!') == '!');
	ASSERT(ft_tolower('\x01') == '\x01');
	ASSERT(ft_tolower('\x02') == '\x02');
	ASSERT(ft_tolower('"') == '"');
	ASSERT(ft_tolower('#') == '#');
	ASSERT(ft_tolower('$') == '$');
	ASSERT(ft_tolower('%') == '%');
	ASSERT(ft_tolower('*') == '*');
	ASSERT(ft_tolower('+') == '+');
}

void	test_strchr(void)
{
	print_test_name(__func__);
	ASSERT(ft_strchr(strcpy(s, ""), '\0') == s);
	ASSERT(ft_strchr(strcpy(s, ""), ' ') == 0);
	ASSERT(ft_strchr(strcpy(s, ""), '\x12') == 0);
	ASSERT(ft_strchr(strcpy(s, ""), -123) == 0);
	ASSERT(ft_strchr(strcpy(s, ""), -1) == 0);

	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), 'a') == s);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), 'b') == &s[1]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), 'c') == &s[2]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), ' ') == &s[3]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), '\x12') == &s[4]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), '\t') == &s[5]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t\x12 cba"), '\0') == &s[strlen(s)]);

	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), 'a') == s);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), 'b') == &s[1]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), 'c') == &s[2]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), ' ') == &s[3]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), '\x12') == &s[4]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), '\t') == &s[5]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), '\0') == &s[6]);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), -123) == 0);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), -23) == 0);
	ASSERT(ft_strchr(strcpy(s, "abc \x12\t"), -1) == 0);

	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), 'a') == s);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), 'b') == &s[1]);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), 'c') == &s[2]);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), '\0') == &s[3]);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), ' ') == 0);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), '\x12') == 0);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), '\t') == 0);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), -123) == 0);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), -23) == 0);
	ASSERT(ft_strchr(strcpy(s, "abc\0\x12\t"), -1) == 0);
}

void	test_strrchr(void)
{
	print_test_name(__func__);
	ASSERT(ft_strrchr(strcpy(s, ""), '\0') == s);
	ASSERT(ft_strrchr(strcpy(s, ""), ' ') == 0);
	ASSERT(ft_strrchr(strcpy(s, ""), '\x12') == 0);
	ASSERT(ft_strrchr(strcpy(s, ""), -123) == 0);
	ASSERT(ft_strrchr(strcpy(s, ""), -1) == 0);

	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), '\0') == &s[strlen(s)]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), 'a') == &s[strlen(s) - 1]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), 'b') == &s[strlen(s) - 2]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), 'c') == &s[strlen(s) - 3]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), ' ') == &s[strlen(s) - 4]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), '\x12') == &s[strlen(s) - 5]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t\x12 cba"), '\t') == &s[strlen(s) - 6]);

	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), 'a') == s);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), 'b') == &s[1]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), 'c') == &s[2]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), ' ') == &s[3]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), '\x12') == &s[4]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), '\t') == &s[5]);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), -123) == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), -23) == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc \x12\t"), -1) == 0);

	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), 'a') == s);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), 'b') == &s[1]);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), 'c') == &s[2]);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), '\0') == &s[3]);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), ' ') == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), '\x12') == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), '\t') == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), -123) == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), -23) == 0);
	ASSERT(ft_strrchr(strcpy(s, "abc\0\x12\t"), -1) == 0);
}

void	test_strncmp(void)
{
	print_test_name(__func__);
	ASSERT(ft_strncmp("", "", 0) == 0);
	ASSERT(ft_strncmp("", "", 1) == 0);
	ASSERT(ft_strncmp("", "", 2) == 0);
	ASSERT(ft_strncmp("", "", 3) == 0);

	ASSERT(ft_strncmp("", "a", 0) == 0);
	ASSERT(ft_strncmp("", "a", 1) < 0);
	ASSERT(ft_strncmp("", "a", 2) < 0);

	ASSERT(ft_strncmp("", "a", 0) == 0);
	ASSERT(ft_strncmp("", "a", 1) < 0);
	ASSERT(ft_strncmp("", "a", 2) < 0);
	ASSERT(ft_strncmp("", "aaa", 0) == 0);
	ASSERT(ft_strncmp("", "aaa", 1) < 0);
	ASSERT(ft_strncmp("", "aaa", 2) < 0);
	ASSERT(ft_strncmp("", "aaa", 3) < 0);
	ASSERT(ft_strncmp("", "aaa", 4) < 0);
	ASSERT(ft_strncmp("", "aaa", 5) < 0);
	ASSERT(ft_strncmp("", "abc", 0) == 0);
	ASSERT(ft_strncmp("", "abc", 1) < 0);
	ASSERT(ft_strncmp("", "abc", 2) < 0);
	ASSERT(ft_strncmp("", "abc", 3) < 0);
	ASSERT(ft_strncmp("", "abc", 4) < 0);
	ASSERT(ft_strncmp("", "abc", 5) < 0);

	ASSERT(ft_strncmp("a", "", 0) == 0);
	ASSERT(ft_strncmp("a", "", 1) > 0);
	ASSERT(ft_strncmp("a", "", 2) > 0);
	ASSERT(ft_strncmp("aaa", "", 0) == 0);
	ASSERT(ft_strncmp("aaa", "", 1) > 0);
	ASSERT(ft_strncmp("aaa", "", 2) > 0);
	ASSERT(ft_strncmp("aaa", "", 3) > 0);
	ASSERT(ft_strncmp("aaa", "", 4) > 0);
	ASSERT(ft_strncmp("aaa", "", 5) > 0);
	ASSERT(ft_strncmp("abc", "", 0) == 0);
	ASSERT(ft_strncmp("abc", "", 1) > 0);
	ASSERT(ft_strncmp("abc", "", 2) > 0);
	ASSERT(ft_strncmp("abc", "", 3) > 0);
	ASSERT(ft_strncmp("abc", "", 4) > 0);
	ASSERT(ft_strncmp("abc", "", 5) > 0);

	ASSERT(ft_strncmp("a", "a", 0) == 0);
	ASSERT(ft_strncmp("a", "a", 1) == 0);
	ASSERT(ft_strncmp("a", "a", 2) == 0);
	ASSERT(ft_strncmp("a", "a", 3) == 0);
	ASSERT(ft_strncmp("a", "aaa", 0) == 0);
	ASSERT(ft_strncmp("a", "aaa", 1) == 0);
	ASSERT(ft_strncmp("a", "aaa", 2) < 0);
	ASSERT(ft_strncmp("a", "aaa", 3) < 0);
	ASSERT(ft_strncmp("a", "aaa", 4) < 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 0) == 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 1) == 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 2) == 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 3) == 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 4) > 0);
	ASSERT(ft_strncmp("aaaa", "aaa", 5) > 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 0) == 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 1) == 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 2) == 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 3) == 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 4) < 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 5) < 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 6) < 0);
	ASSERT(ft_strncmp("abcde", "abcxz", 7) < 0);

	ASSERT(ft_strncmp("\x01", "\xff", 1) < 0);
	ASSERT(ft_strncmp("\xae", "\x12", 1) > 0);
	ASSERT(ft_strncmp("\xae", "\xef", 1) < 0);

	ASSERT(ft_strncmp("aaa\0abc", "aaa\0xyz", 7) == 0);
}

void	test_memchr(void)
{
	print_test_name(__func__);
	ASSERT(ft_memchr(strcpy(s, ""), '\0', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, ""), '\0', 1) == s);
	ASSERT(ft_memchr(strcpy(s, ""), 'a', 1) == 0);

	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'a', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'a', 1) == s);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'a', 2) == s);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'a', 3) == s);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'b', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'b', 1) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'b', 2) == &s[1]);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'b', 3) == &s[1]);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'c', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'c', 1) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'c', 2) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'c', 3) == &s[2]);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 1) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 2) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 3) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 4) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 5) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), '\0', 6) == &s[5]);

	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 1) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 2) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 3) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 4) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 5) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde\0"), 'k', 6) == 0);

	// 32800 = 1000000000100000 (binary) = 100000 (truncated) = 32 
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 0) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 1) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 2) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 3) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 4) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 5) == 0);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 6) == &s[5]);
	ASSERT(ft_memchr(strcpy(s, "abcde \0"), 32800, 7) == &s[5]);
}

void	test_memcmp(void)
{
	print_test_name(__func__);
	ASSERT(ft_memcmp("", "", 0) == 0);
	ASSERT(ft_memcmp("", "", 1) == 0);

	ASSERT(ft_memcmp("", "a", 0) == 0);
	ASSERT(ft_memcmp("", "a", 1) < 0);
	ASSERT(ft_memcmp("", "a", 2) < 0);

	ASSERT(ft_memcmp("", "abc", 0) == 0);
	ASSERT(ft_memcmp("", "abc", 1) < 0);
	ASSERT(ft_memcmp("", "abc", 2) < 0);
	ASSERT(ft_memcmp("", "abc", 3) < 0);
	ASSERT(ft_memcmp("", "abc", 4) < 0);

	ASSERT(ft_memcmp("a", "", 0) == 0);
	ASSERT(ft_memcmp("a", "", 1) > 0);
	ASSERT(ft_memcmp("a", "", 2) > 0);

	ASSERT(ft_memcmp("abc", "", 0) == 0);
	ASSERT(ft_memcmp("abc", "", 1) > 0);
	ASSERT(ft_memcmp("abc", "", 2) > 0);
	ASSERT(ft_memcmp("abc", "", 3) > 0);
	ASSERT(ft_memcmp("abc", "", 4) > 0);

	ASSERT(ft_memcmp("abcde", "abcxz", 0) == 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 1) == 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 2) == 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 3) == 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 4) < 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 5) < 0);
	ASSERT(ft_memcmp("abcde", "abcxz", 6) < 0);

	ASSERT(ft_memcmp("\x01", "\xff", 0) == 0);
	ASSERT(ft_memcmp("\xae", "\x12", 0) == 0);
	ASSERT(ft_memcmp("\xae", "\xef", 0) == 0);
	ASSERT(ft_memcmp("\x01", "\xff", 1) < 0);
	ASSERT(ft_memcmp("\xae", "\x12", 1) > 0);
	ASSERT(ft_memcmp("\xae", "\xef", 1) < 0);
	ASSERT(ft_memcmp("\x01", "\xff", 2) < 0);
	ASSERT(ft_memcmp("\xae", "\x12", 2) > 0);
	ASSERT(ft_memcmp("\xae", "\xef", 2) < 0);

	ASSERT(ft_memcmp("aaa\0abc", "aaa\0xyz", 4) == 0);
	ASSERT(ft_memcmp("aaa\0abc", "aaa\0xyz", 5) < 0);
	ASSERT(ft_memcmp("aaa\0abc", "aaa\0xyz", 6) < 0);
	ASSERT(ft_memcmp("aaa\0abc", "aaa\0xyz", 7) < 0);
	ASSERT(ft_memcmp("aaa\0abc", "aaa\0xyz", 8) < 0);
}

void	test_strnstr(void)
{
	print_test_name(__func__);
	ASSERT(ft_strnstr(strcpy(s, ""), "", 0) == s);
	ASSERT(ft_strnstr(strcpy(s, ""), "", 1) == s);
	ASSERT(ft_strnstr(strcpy(s, ""), "", 2) == s);
	ASSERT(ft_strnstr(strcpy(s, ""), "", 3) == s);

	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 1) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 2) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 3) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 4) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 5) == 0);
	ASSERT(ft_strnstr(strcpy(s, ""), "abc", 6) == 0);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 0) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 1) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 2) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 3) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 4) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 5) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "", 6) == s);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "a", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "b", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "c", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "d", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "e", 0) == 0);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "a", 1) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "b", 1) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "c", 1) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "d", 1) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "e", 1) == 0);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "a", 2) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "b", 2) == &s[1]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "c", 2) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "d", 2) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "e", 2) == 0);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "a", 5) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "b", 5) == &s[1]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "c", 5) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "d", 5) == &s[3]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "e", 5) == &s[4]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "a", 100) == s);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "b", 100) == &s[1]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "c", 100) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "d", 100) == &s[3]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "e", 100) == &s[4]);

	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 0) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 1) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 2) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 3) == 0);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 4) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 5) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcde"), "cd", 100) == &s[2]);

	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 4) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 5) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 6) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 7) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 8) == &s[2]);
	ASSERT(ft_strnstr(strcpy(s, "abcdecd"), "cd", 100) == &s[2]);

	ASSERT(ft_strnstr(strcpy(s, "abcd"), "cd", 100) == &s[2]);

	ASSERT(ft_strnstr(strcpy(s, "ababc"), "abc", 100) == &s[2]);

	ASSERT(ft_strnstr(strcpy(s, "bananananano"), "nano", 100) == &s[8]);
}

void	test_atoi(void)
{
	print_test_name(__func__);
	ASSERT(ft_atoi("") == 0);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f") == 0);
	ASSERT(ft_atoi(" \t\n\v\f\r\r   \t\n   \r    \f+") == 0);
	ASSERT(ft_atoi(" \t\n\v\f\r\r   \t\n   \r    \f-") == 0);
	ASSERT(ft_atoi(" \t\n\v\f\r\r   \t\n   \r    \f++++---+-") == 0);
	ASSERT(ft_atoi("+--++---+++") == 0);
	ASSERT(ft_atoi("abcde%/*1234") == 0);

	ASSERT(ft_atoi("0") == 0);
	ASSERT(ft_atoi("1") == 1);
	ASSERT(ft_atoi("2") == 2);
	ASSERT(ft_atoi("3") == 3);

	ASSERT(ft_atoi("+0") == 0);
	ASSERT(ft_atoi("+1") == 1);
	ASSERT(ft_atoi("+2") == 2);
	ASSERT(ft_atoi("+3") == 3);

	ASSERT(ft_atoi("-0") == 0);
	ASSERT(ft_atoi("-1") == -1);
	ASSERT(ft_atoi("-2") == -2);
	ASSERT(ft_atoi("-3") == -3);

	ASSERT(ft_atoi("-+0") == 0);
	ASSERT(ft_atoi("-+1") == 0);
	ASSERT(ft_atoi("--2") == 0);
	ASSERT(ft_atoi("-+-3") == 0);

	ASSERT(ft_atoi("+0") == 0);
	ASSERT(ft_atoi("+1") == 1);
	ASSERT(ft_atoi("+2") == 2);
	ASSERT(ft_atoi("+3") == 3);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+0") == 0);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+1") == 1);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+2") == 2);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+3") == 3);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-0") == 0);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-1") == -1);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-2") == -2);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-3") == -3);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+11324") == 11324);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+215521234") == 215521234);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f+31424") == 31424);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-11324") == -11324);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-215521234") == -215521234);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n   \r    \f-31424") == -31424);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n53523   \r    \f-11324") == 53523);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n1234   \r    \f-215521234") == 1234);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n0   \r    \f-31424") == 0);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-53523asdf   \r    \f-11324") == -53523);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-1234~   \r    \f-215521234") == -1234);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-00000342542   \r    \f-31424") == -342542);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n+2147483640   \r    \f-31424") == 2147483640);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n+2147483647   \r    \f-31424") == 2147483647);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n+2147483648   \r    \f-31424") == -2147483648);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n+2147483649   \r    \f-31424") == -2147483647);

	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-2147483640   \r    \f-31424") == -2147483640);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-2147483647   \r    \f-31424") == -2147483647);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-2147483648   \r    \f-31424") == -2147483648);
	ASSERT(ft_atoi("\t\n\v\f\r\r   \t\n-2147483649   \r    \f-31424") == 2147483647);
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
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
}
