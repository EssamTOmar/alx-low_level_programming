#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: a pointer to the new created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (malloc == 0)
	{
		return (NULL);
	}
	for (arr[i] = min; arr[i] = max; i++)
		;
	return (arr);
}
