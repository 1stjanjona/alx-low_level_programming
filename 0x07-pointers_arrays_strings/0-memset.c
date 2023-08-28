#include "main.h"

/**
 * *_memset - check the constant byte
 *
 * @s: 'memory area'
 * @b: 'constant byte'
 * @n: 'bytes of the memory pointed to s with b'
 *
 * Return: return (s).
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while ((*s = b) && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		n--;
	}
	return (s);
}
