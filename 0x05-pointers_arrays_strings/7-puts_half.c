#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: the string that will be half printed
 * Return: the second half of the string
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
		i = (len - 1) / 2;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
