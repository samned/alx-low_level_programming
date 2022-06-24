#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: the number of arguments
 * @argv: the arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int coinCount, coinAmount, coinIndex;

	if (argc != 2)
	{
		printf("%s\n", "Error");
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		coinCount = 0;
		coinIndex = 0;
		coinAmount = atoi(argv[1]);

		while (coinIndex <= 4 && coinAmount > 0)
		{
			if (coinAmount >= coins[coinIndex])
			{
				coinAmount -= coins[coinIndex];
				coinCount++;
			}
			else
			{
				coinIndex++;
			}
		}
		printf("%d\n", coinCount);
	}

	return (0);
}
