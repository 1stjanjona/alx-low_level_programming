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

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
