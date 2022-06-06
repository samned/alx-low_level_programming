#include <stdlib.h>
#include <time.h>
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	return (0);
}
