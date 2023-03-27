#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string that we will git its length
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int a = 1;
	int b = 0;
	char c = s[0];

	while (c != '\0')
	{
		b++;
		c = s[a++];
	}
	return (b);
}

