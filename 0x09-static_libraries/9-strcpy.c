#include "main.h"

/**
 * *_strcpy - check the string pointed
 *
 * @src: 'copy to dest'
 * @dest: 'copy from src'
 *
 * Return: Return (dest).
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
