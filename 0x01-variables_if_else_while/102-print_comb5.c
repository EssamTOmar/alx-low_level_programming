#include <stdio.h>
/**
 * main - Entry Point
 * combining numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

		for (a = '0'; a <= '9'; a++)
		for (b = '0'; b < '9'; b++)
		for (c = '0'; c <= '9'; c++)
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if (b == '8')
				continue;
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
