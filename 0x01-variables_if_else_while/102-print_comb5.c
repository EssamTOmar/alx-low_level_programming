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
	{
		putchar(a);
	for (b = '0'; b <= '9'; b++)
		if (a != b)
		{
			putchar(b);
		}
	putchar(' ');
	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (d = '0'; d <= '9'; d++)
		if (c != d)
			putchar(d);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
