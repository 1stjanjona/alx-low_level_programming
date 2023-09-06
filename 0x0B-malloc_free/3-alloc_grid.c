#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - check pointers of 2D array of integers.
 *
 * @width: 'width of the grid'
 * @height: 'height of the grid'
 *
 * Return: on failure, for width or height <= 0 return (NULL)
 * on Success return (ptr)
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i >= 0 && i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			i--;
			free(ptr[i]);
			for (j = 0; j <= i; j++)
			{
				j--;
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i >= 0 && i < height; i++)
	{
		for (j = 0; j < width && j >= 0; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
