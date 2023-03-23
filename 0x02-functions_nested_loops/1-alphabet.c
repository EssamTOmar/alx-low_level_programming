#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Printing the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
