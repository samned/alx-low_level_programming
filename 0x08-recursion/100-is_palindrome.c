#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - is_palindrome
 * @s: string
 *
 * Return 1 if string is palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	if (length == 0)
		return (1);
	else
		return (palindrome_c(s, length, 0));
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: String length
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * palindrome_c - check palindrome
 * @s: string
 * @len: length
 * @start: start
 *
 * Return: 0 if not palindrome else return 1
 */
int palindrome_c(char *s, int len, int start)
{
	int mid;

	mid = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	if (s[start] != s[len - start - 1])
	{
		return (0);
	}
	else if (start == mid)
	{
		return (1);
	}
	else
	{
		return (palindrome_c(s, len, start + 1));
	}
}
