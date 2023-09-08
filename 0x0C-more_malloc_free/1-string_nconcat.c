#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - check two strings
 *
 * @s1: 'first string'
 * @s2: 'second string'
 * @n: 'length of string'
 *
 * Return: fails return (NULL), return (" "), on success return (s1 & s2)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 1, size2 = 1, sum1 = 0, sum2 = 0, i = 0, j = 0;
	char *str;

	while (s1 && s1[size1] != '\0')
	{
		size1++;
	}
	while (s2 && s2[size2] != '\0')
	{
		size2++;
	}
	if (n >= size2)
	{
		n = size2;
		sum1 = size1 + n;
		str = malloc(sizeof(char) * (sum1 + 1));
	}
	else if (n < size2)
	{
		sum2 = size1 + size2;
		str = malloc(sizeof(char) * (sum2 + 1));
	}
	if (str == NULL)
	{
		return (0);
	}
	while (i <= size1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while ((n >= size2 && i < (size1 + n)) || (n < size2 && i < (size1 + size2)))
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[size1 + n] = '\0';
	return (str);
}
