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
	int i, len;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min) + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
