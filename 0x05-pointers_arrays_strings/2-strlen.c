#include "main.h"
/**
 * _strlen - string length
 * @s: pointer to string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
