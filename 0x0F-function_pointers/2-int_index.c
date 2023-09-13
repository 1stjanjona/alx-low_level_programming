#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for an integer
 * @array: 'array'
 * @size: 'size of an array'
 * @cmp: 'function pointer'
 * Return: Return (index), no elements  or size <= 0 Return (-1).
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	if (size > 0 && cmp(array[i]) != '\0')
	{
		while (i < size)
		{
			cmp(array[i]);
			i++;
		}
		return (1);
	}
	return (-1);
}
