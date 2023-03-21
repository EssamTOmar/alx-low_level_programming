#include <stdio.h>
/**
 * main - Entry Point
 * combinr numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	for (b = '0'; b <= '9'; b++)
		if (a == b)
		{
			continue;
		}
	putchar(b);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
