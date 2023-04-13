#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: previously created array
 * @height: number of rows of the array
 * Return: always 0 (success)
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
		free(grid[height--]);
	free(grid);
}
