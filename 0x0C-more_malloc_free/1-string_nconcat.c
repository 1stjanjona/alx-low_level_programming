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
	unsigned int size1 = 1, size2 = 1, size = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n >= size2)
	{
		n = size2;
	}
	size = size1 + n;
	str = malloc(size + 1);

	if (str == NULL)
	{
		str = "";
	}
	while (i <= size1 && s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j <= n && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[size] = '\0';
	return (str);
}
