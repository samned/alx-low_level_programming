#include "main.h"
/**
 * _sqrt_recursion - recursion square root
 * @n: integer
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int passed from main
 * @i: square root counter
 * Return: int
 */

int square(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (square(n, i + 1));
	}
}
