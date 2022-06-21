#include "main.h"
/**
 * *_memset - memset
 * @s: pointer to the string
 * @b: the byte to fill the string with
 * @n: the number of bytes to fill
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
