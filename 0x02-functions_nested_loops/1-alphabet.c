#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * printing alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
