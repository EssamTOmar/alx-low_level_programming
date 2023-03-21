#include <stdio.h>
/**
 * main - Entry Point
 * printing the hexadecimal numbers
 *
 *Return: always 0 (success)
 */
int main(void)
{
	int num;
	int ch;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
