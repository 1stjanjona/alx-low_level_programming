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
	int i = 0;
	int j = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}

	if (i == j)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
	}

	str = (char *)malloc(sizeof(char) * (i + i + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = j = 0; str[i]; i++)
	{
		while (s1[i] != '\0' && s2[j] != '\0')
		{
			str[i] = s1[i];
			str[j] = s2[j];
		}
	}
	str[i] = str[j] = '\0';
	return (str);
}
