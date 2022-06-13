#include "main.h"
/**
 * print_rev - string length
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
