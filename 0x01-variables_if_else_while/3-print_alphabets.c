#include <stdlib.h>
#include <stdio.h>
/**
 * main - Check random number's last digit
 *
 * Description: Last digit checker
 *
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	printf("\n");
	return (0);
}
