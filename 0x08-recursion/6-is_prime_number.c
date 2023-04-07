#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - a function that checks if the number is a prime
 * @n: the number to be checked
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (prime(n, 0));
}
/**
 * prime - a function to git the prime number
 * @n: the number to be checked
 * @i: iteration
 * Return: 1 if prime 0 otherwise
 */
int prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (i * i == n)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
