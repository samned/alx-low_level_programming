#include "main.h"
/**
 * print_square - print_square
 * @size: number of times \ is printed
 *
 * Description: print_diagonal
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
