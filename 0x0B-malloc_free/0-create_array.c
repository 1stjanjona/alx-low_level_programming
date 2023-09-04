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
	unsigned int i = 0;
	char *array = NULL;

	array = (char *)malloc(sizeof(char) * (size));

	if (size == 0 || *array == '\0')
	{
		return (0);
	}
	else if (size != 0 && *array != '\0')
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
