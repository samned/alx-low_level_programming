#include "main.h"
/**
 * *_strncat - *_strncat
 * @dest: destination
 * @src: source
 * @n: number of chars
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[len] = src[i];
			len++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
