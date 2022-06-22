#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * Return: 0 if it is not prime and 1 if it is prime number
 */
int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
/**
 * prime_n - checks if a number is prime
 * @n: number to be checked
 * @i: start
 *
 * Return: 0 if it is not prime and 1 if it is prime number
 */
int prime_n(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if ((n % i) == 0 || n == 2)
	{
		return (0);
	}
	else if (i < n)
	{
		return (prime_n(n, i + 1));
	}
	return (0);
}
