#include <stdio.h>
#include <string.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long: %i byte(s)\n", sizeof(long));
	printf("Size of a long long: %i byte(s)\n", sizeof(long long));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}

