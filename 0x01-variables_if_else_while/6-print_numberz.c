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

	for (i = 0; i <= 9; i++)
	{
		putchar(i % 10 + '0');
	}
	printf("\n");
	return (0);
}
