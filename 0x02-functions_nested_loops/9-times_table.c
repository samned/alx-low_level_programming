#include "main.h"
/**
 * times_table - Return last digit
 *
 * Description: This program returns last digit
 *
 * Return: last digit
 *
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			if (!(j == 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return;

}
