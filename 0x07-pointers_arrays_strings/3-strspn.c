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
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				i++;
				return (i);
			}
			else
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
