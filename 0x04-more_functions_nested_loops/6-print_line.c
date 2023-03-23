#include "main.h"

/**
 * print_line - print straight line
 * @n: the number added to the function
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= '0')
	{
		putchar('\n');
	}
	else
		putchar('_');
	putchar('\n');
}
