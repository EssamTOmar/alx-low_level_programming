#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14
 * ten times in new lines
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num;
	int a = 0;

	while (a <= 14)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
