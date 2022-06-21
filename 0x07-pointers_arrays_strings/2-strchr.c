#include "main.h"
/**
 * *_strchr - charachter in string
 * @s: reference string
 * @c: charachter to be searched
 *
 * Return: found charachter
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (c);
		}
		i++;
	}
	return (NULL);
}
