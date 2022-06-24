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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
	}

	return (0);
}
