#include "main.h"

/**
 * print_line - print straight line
 * @n: the number added to the function
 */
void print_line(int n)
{
	int L;

	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (L = '1'; L <= 'n'; L++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
