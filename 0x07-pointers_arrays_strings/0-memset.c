#include "main.h"
/**
 * *_memset() - _memset()
 * @s: pointer to the string
 * @b: the byte to fill the string with
 * @n: the number of bytes to fill
 *
 * Description - _memset() fills n bytes of memory starting at s with the
 *
 * Return: pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
