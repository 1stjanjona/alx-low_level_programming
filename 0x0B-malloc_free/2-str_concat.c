#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - check two strings.
 *
 * @s1: 'first string'
 * @s2: 'second string'
 *
 * Return: on failure return (NULL), on success return (str)
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size1 = 1, size2 = 1, size;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	size = size1 + size2;
	str = (char *)malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (i <= size1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j <= size2 && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[size] = '\0';
	return (str);
}
