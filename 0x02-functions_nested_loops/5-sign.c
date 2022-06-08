#include "main.h"
/**
 * print_sign - print lower case letters
 * @n: Int parameter
 *
 * Description: This program prints lower case letters
 *
 * Return: 1 if n greater than 0, 0 if it is 0 and -1 if it is less than 0
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
