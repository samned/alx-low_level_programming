#include "main.h"
/**
 * print_last_digit - Return last digit
 * @n: Int parameter
 *
 * Description: This program returns last digit
 *
 * Return: last digit
 *
*/
int print_last_digit(int n)
{
	int rv;

	rv = n < 0 ? -1 * (n % 10) : (n % 10);
	_putchar(rv + '0');
	return (rv);

}
