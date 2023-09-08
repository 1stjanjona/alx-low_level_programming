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
	unsigned int size1 = 0, size2 = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[size1] != '\0')
	{
		size1++;
	}
	while (s2 && s2[size2] != '\0')
	{
		size2++;
	}
	if (n >= size2)
		n = size2, str = malloc((size1 + n) + 1);
	if (n < size2)
		str = malloc((size1 + size2) + 1);
	if (str == NULL)
		return (0);

	while (i <= size1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j <= size2 && n < size2 && i <= (size1 + size2))
	{
		str[i] = s2[j];
		i++, j++;
	}
	while (j <= n && n >= size2 && i <= (size1 + n))
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[size1 + n] = '\0';
	return (str);
}
