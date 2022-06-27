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
	int i, j;

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; i != '\0'; i++)
		;
	m = malloc(i * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
			m[j] = str[j];
	}
	return (m);
}
