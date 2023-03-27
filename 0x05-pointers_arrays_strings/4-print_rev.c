#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string to be brinted in reverse
 * Return: the sting in reverse
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (s[c]; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
