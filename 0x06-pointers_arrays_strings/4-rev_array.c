#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array
 * @n: array elements count
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
