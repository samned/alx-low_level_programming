#include "main.h"
#include <stdio.h>
/**
 * _strcmp - _strcmp
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int diff, i;

	diff = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
}
