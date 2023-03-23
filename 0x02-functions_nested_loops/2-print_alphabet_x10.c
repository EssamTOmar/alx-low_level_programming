#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - printing alphabets 10 times
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int ch;

	while (a <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		a++;
	}
}
