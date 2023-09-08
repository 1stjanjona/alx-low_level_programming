#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocate a memory block using
 *
 * @ptr: 'pointer to the memory'
 * @old_size: 'size in bytes of ptr'
 * @new_size: 'new size in bytes of new memory'
 *
 * Return: On Success return (ptr), new_size == 0 return (NULL), free(ptr).
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		ptr = malloc(old_size + new_size + 1);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
