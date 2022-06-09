#include "main.h"
/**
 * print_numbers - Multiply numbers
 *
 * Description: This is a description
 *
 * Return: 0 or 1
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(i % 10);
	}
	_putchar('\n');
}
