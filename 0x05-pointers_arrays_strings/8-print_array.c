#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the array to be printed
 * @n: number of elements to be printed
 * Return: n numbers of array
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index <= n; index++)
	{
		_putchar(a[index]);
		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');
}
