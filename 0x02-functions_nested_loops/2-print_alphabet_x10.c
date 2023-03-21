#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * printing alphabets 10 times
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 0;
	int ch;

	while (a <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
			_putchar('\n');
		a++;
	}
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
