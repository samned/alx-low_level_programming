#include "main.h"
/**
 * positive_or_negative - Check random number is positive,negative or zero
 *
 * Description: A checker function
 *
 * Return: 0
 */
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
