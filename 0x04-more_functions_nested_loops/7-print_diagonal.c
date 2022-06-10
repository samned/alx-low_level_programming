#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_diagonal - print_diagonal
 * @n: number of times \ is printed
 * Description: print_diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
