#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 *
 * @min: 'minimum values of integers in array'
 * @max: 'maximum values of integers in array'
 *
 * Return: if min > max or malloc fails return (NULL), On success return (arr)
*/
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(arr) * ((max - min) + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min;
		i++, min++;
	}
	return (arr);
}
