#include <stdio.h>
/**
 * main - Entry Point
 * putchar - prints the alphapet in lower case then upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
