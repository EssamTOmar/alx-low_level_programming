#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer
 * @dest: the string that will be new
 * @src: the string that will be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}
