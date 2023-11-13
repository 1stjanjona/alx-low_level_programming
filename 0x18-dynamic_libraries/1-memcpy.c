#include "main.h"

/**
 * *_memcpy - check memory area
 *
 * @dest: 'memory area'
 * @src: 'memory arae'
 * @n: 'bytes to be coppied from src to dest'
 *
 * Return: return (dest).
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while ((src[i] != '\0') && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		n--;
	}
	return (dest);
}
