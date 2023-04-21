#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	char *string;

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
