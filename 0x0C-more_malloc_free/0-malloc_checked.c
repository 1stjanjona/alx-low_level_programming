#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * void *malloc_checked - allocates memory
 *
 * @b: 'memory to be allocated'
 *
 * Return: malloc fails return (98), on success reurn (str)
*/
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
