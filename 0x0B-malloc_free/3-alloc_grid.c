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

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (h < height)
	{
		arr[h] = malloc(sizeof(**arr) * width);
		if (arr[h] == 0)
		{
			while (h++)
			{
				free(arr[h]);
				free(arr);
				return (NULL);
			}
		}
		while (w < width)
		{
			arr[h][w] = 0;
			w++;
		}
		_putchar('\n');
		h++;
	}
	return (arr);
}
