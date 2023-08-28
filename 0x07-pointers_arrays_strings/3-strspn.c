#include "main.h"

/**
 * _strspn - check the length of a prefix sustring
 *
 * @s: 'number of bytes in the initial segment of s'
 * @accept: 's concists only of bytes from accept'
 *
 * Return: return the number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				n++;
			}
			else if (*accept != '\0')
			{
				return (n);
			}
			accept++;
		}
		s++;
	}
	return (n);
}
