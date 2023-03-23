#include "main.h"

/**
 * print_line - print straight line
 * @n: the number added to the function
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int L;

	if (n <= '0')
	{
		putchar('\n');
	}
	else
		for (L = '1'; L <= 'n'; L++)
		{
			putchar('_');
		}
	putchar('\n');
}
