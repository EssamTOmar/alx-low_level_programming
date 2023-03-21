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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	for (b = '0'; b <= '9'; b++)
		if (a == b)
		{
			continue;
		}
		else
			putchar(b);
	for (c = '0'; c <= '9'; c++)
		if (c == a || c == b)
			{
				continue;
			}
			else
				putchar(c);
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
