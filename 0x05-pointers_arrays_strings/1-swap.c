#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap two integers
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
