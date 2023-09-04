#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	array = (char *)malloc(sizeof(char) * (size));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
