#include "main.h"
/**
 * _pow_recursion - _pow_recursion
 * @x: x
 * @y: y
 *
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
