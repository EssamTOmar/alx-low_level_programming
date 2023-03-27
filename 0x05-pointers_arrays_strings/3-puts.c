#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: the string to be printed
 * Return: string to the standard output
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
