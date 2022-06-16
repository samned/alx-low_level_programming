#include "main.h"
/**
 * rev_string - string length
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i, middle;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	middle = len / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i] = temp;
	}
}
