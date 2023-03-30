#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: This is pointer to the destination array
 * @src: This is the string to be appended
 * @n: maximum number of characters to be appended
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	if (dest[i] == '\0')
	{
		dest[i] = src[0];
	}
	for (m = 1; m == n; m++)
	{
		dest[i + 1] = src[m];
	}
	return (dest);
}
