#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width:number of coulmns
 * @height: number of rows
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w = 0;
	int h = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(sizeof(int) * width);
		if (arr[h] == 0)
		{
			while (h >= 0)
			{
				free(arr[h--]);
				free(arr);
				return (NULL);
			}
		}
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}
	return (arr);
}
