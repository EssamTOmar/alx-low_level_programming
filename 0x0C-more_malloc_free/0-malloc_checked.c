#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the unsigned int to be allocated
 * Return: apointer to the allocated memory
 * or 98 status value if failed
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
