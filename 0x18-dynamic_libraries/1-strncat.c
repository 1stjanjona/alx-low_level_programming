#include "main.h"

/**
 * *_strncat - check the two strings
 *
 * @dest: 'concatenates from src'
 * @src: 'concatenates to dest'
 * @n: 'src contains n bytes'
 *
 * Return: return (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
