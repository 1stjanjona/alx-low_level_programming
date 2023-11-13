#include "main.h"

/**
 * *_strncpy - check the string
 *
 * @dest: 'copy from src'
 * @src: 'copy to dest'
 * @n: 'n bytes'
 *
 * Return: return (dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
