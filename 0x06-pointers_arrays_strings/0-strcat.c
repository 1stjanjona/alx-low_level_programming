#include "main.h"

/**
 * *_strcat - check the two integers
 *
 * @dest: 'appends from src'
 * @src: 'appends to dest'
 *
 * Return: return (dest)
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int l = 0;

	while (dest[l] != 0)
	{
		l++;
	}
	for (i = 0; src[i] != '\0';)
	{
		i++;
		l++;
		dest[l] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
