#include <stdio.h>
/**
 * main - Entry Point
 * print the alphapet in lowercase without printing the letters q and e
 *
 *Return: Always 0(success)
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar ('\n');
	return (0);
}
