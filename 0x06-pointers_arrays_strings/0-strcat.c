#include "main.h"
/**
 * *_strcat - *_strcat
 *
 */
char *_strcat(char *dest, char *src)
{
	int len, s;

	len = 0;
	s = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[s] != '\0')
	{
		dest[len] = src[s];
		len++;
		s++;
	}
	return dest;
}