#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '2') || (c == '4'))
		{
			continue;
		}
		else
			_putchar(c);
	}
	_putchar('\n');
}
