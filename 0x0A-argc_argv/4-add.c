#include <stdio.h>
#include <errno.h>
#include <limits.h>
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
	int sum, i;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		char *p;
		int num;
		long conv;

		errno = 0;
		conv = strtol(argv[i], &p, 10);

		if (errno != 0 || *p != '\0' || conv > INT_MAX || conv < INT_MIN)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			num = conv;
			sum += num;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
