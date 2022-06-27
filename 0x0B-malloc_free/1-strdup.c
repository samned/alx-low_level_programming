#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - strdup
 * @str: string
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	char *m;
	int size, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			m[j] = str[j];
		}
	}
	return (m);
}
