#include "main.h"
/**
 * main - print putchar
 *
 * Description: This program prints description
 *
 * Return: 0
 *
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
