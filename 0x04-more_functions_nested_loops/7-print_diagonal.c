#include "main.h"

/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 *@n: is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int L;
	int a;

	if (n <= '0')
		_putchar('\n');
	else
	{
		for (a = '1'; a <= n; a++)
		{
			for (L = '1'; L < a; L++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
