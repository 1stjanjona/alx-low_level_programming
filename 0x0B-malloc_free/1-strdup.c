#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - check the new duplicated string.
 *
 * @str: 'the string to be duplicated'
 *
 * Return: str = NULL or insufficient memory return (NULL),
 * On success, return (ptr)
*/
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i && str[j]; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
