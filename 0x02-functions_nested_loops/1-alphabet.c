#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * printing the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
