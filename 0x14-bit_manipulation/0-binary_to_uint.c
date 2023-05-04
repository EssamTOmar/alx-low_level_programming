#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the string that hase the number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum, power;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (power = 1, sum = 0, i--; i >= 0; i--, power *= 2)
		{
			if (b[i] == '1')
			{
				sum += power;
			}
		}
	return (sum);
}
