#include "main.h"
/**
 * _islower - print lower case letters
 * @c: Int parameter
 *
 * Description: This program prints lower case letters
 *
 * Return: 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
