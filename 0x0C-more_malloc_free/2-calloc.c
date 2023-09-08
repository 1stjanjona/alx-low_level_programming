#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - check an array
 *
 * @nmemb: 'number of elements'
 * @size: 'size of an array'
 *
 * Return: fails or nmemb or size = 0 return (NULL), memory = 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(unsigned int) * (size + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size && arr[i] != '\0'; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
