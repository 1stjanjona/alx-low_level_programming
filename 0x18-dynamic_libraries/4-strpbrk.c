#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - check the string for any set of bytes
 *
 * @s: 'contains bytes'
 * @accept: 'has bytes in the string'
 *
 * Return: return (s), or return (NULL) if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if  (*s == accept[i])
			{
				return (s);
			}
			else if (accept[i] == '\0')
			{
				return (NULL);
			}
		}
		s++;
	}
	return (NULL);
}
