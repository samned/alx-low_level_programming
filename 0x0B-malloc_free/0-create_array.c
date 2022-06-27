#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array
 * @size: size
 * @c: charachter
 *
 * Return: Char address
 */
char *create_array(unsigned int size, char c)
{
	char *carr = (char *)malloc(size);
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int)size; i++)
		{
			*(carr + i) = c;
		}
		return (carr);
	}
	return (0);
}
