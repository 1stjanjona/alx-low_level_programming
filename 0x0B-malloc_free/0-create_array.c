#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - check the array
 *
 * @size: 'an array called size'
 * @c: 'character in size'
 *
 * Return: size = 0 return (NULL), it fails return (NULL) or (*array)
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (*array == '\0')
	{
		return (NULL);
	}
	free(array);
	for (i = 0; i < size && size > 0; i++)
	{
		array[i] = c;
	}
	return (array);
}
