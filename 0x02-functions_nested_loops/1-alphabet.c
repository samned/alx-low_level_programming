#include "main.h"
/**
 * main - print lower case letters
 *
 * Description: This program prints lower case letters
 *
 * Return: 0
 *
*/
int print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z', i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
