#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to be cinverted
 * Return: always 0 if success
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
