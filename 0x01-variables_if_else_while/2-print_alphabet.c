#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description : print the alphapit in lowecase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar("%c", character);
	return (0);
}
