#include "main.h"
/**
 * _isalpha - print lower case letters
 * @c: Int parameter
 *
 * Description: This program prints lower case letters
 *
 * Return: 0
 *
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
