#include "main.h"
/**
 * _strlen_recursion - recursion count
 * @s: string
 *
 * Return: count of string chars
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
