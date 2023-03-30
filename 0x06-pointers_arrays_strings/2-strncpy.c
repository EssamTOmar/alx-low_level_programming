#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: This is the pointer to the destination array
 * @src: This is the string to be copied
 * @n: The number of characters to be copied from source
 *
 * Return: the pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i == n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
