#include "main.h"
/**
 * print_alphabet - print lower case letters
 *
 * Description: This program prints lower case letters
 *
 * Return: 0
 *
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
