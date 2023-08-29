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
	unsigned int nbyt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				nbyt++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (nbyt);
			}
		}
		s++;
	}
	return (nbyt);
}
