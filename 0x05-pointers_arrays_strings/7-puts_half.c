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
	int len, i, half;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
		for (i = half; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}