#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: This is pointer to the destination array
 * @src: This is pointer to the source of data to be copied
 * @n: This is the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int m;

	for (i = 0; i < n; i++)
	{
		for (m = 0; m < n; m++)
		{
			if (i == m)
			{
				dest[i] = src[m];
			}
		}
	}
	return (dest);
}
