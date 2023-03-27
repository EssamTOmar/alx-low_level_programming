#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string that we will git its length
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

