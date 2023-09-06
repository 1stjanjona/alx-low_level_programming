#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check 2D grid.
 *
 * @grid: 'grid to be freed'
 * @height: 'height of grid'
 *
 * Return: No return.
*/
void free_grid(int **grid, int height)
{
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[i][j]);
		}
		free(grid[i]);
	}
}
