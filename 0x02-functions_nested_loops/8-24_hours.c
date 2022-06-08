#include "main.h"
/**
 * jack_bauer - Return last digit
 *
 * Description: This program returns last digit
 *
 * Return: last digit
 *
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
	return (0);

}
