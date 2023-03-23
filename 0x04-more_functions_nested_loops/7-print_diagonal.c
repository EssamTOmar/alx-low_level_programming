#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: is the number of '\' should be printed
 */
void print_diagonal(int n)
{
	int L;

	if (n <= '0')
		_putchar('\n');
	else
	{
		for (L = '1'; L <= 'n'; L++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
