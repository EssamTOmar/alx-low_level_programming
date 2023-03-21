#include <stdio.h>
/**
 * main - Entry Point
 * combine some numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;

		for (a = '0'; a < '8'; a++)
		for (b = a + 1; b < '9'; b++)
		for (c = b + 1; c <= '9'; c++)
		{
			putchar(a);
			putchar(b);
			putchar(c);
			if (a == '7')
				continue;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
