#include "main.h"
/**
 * more_numbers - 10x numbers
 *
 * Description: This is a description
 *
 * Return: void
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		if (i < 9)
		{
			_putchar('\n');
		}
	}
}
