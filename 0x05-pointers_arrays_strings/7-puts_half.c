#include "main.h"
#include <stdio.h>
/**
 * puts_half - puts_half
 *
 * @str: string parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, n;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	len += 1;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
