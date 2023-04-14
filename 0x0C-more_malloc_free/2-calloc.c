#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bited of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		a[i] = 0;
	}
	return (a);
}
