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
	int m = 1;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	if (dest[i] == '\0')
	{
		dest[i] = src[0];
	}
	while (src[m] != '\0' && m < n)
	{
		dest[i + 1] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';
	return (dest);
}
