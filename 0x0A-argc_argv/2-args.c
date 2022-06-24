#include <stdio.h>
/**
 * main - main
 * @argc: the number of arguments
 * @argv: the arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		/* code */
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
