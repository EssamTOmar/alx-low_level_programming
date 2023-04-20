#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d\n", va_arg(arg, const unsigned int));
		}
		else
			printf("%s%d\n", separator, va_arg(arg, const unsigned int));
	}
	va_end(arg);
	printf("\n");
}
