#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of array
 * @c: the character in the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
