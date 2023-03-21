#include <stdio.h>
/**
 * main - Entry Point
 * printing some numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	for ( a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if(a == '9')
		{
		continue;
		}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
