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
	char *m = malloc(sizeof(str));
	int i;

	if (str == NULL)
	{
		return ('\0');
	}
	i = 0;
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
	}
	return (m);
}
