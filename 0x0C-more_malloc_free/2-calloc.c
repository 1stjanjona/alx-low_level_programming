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
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
