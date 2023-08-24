#include "main.h"

/**
 * _strcmp - check two strings
 *
 * @s1: 'compare to s2'
 * @s2: 'compare to s1'
 *
 * Return: return(*s1 - *s2)
*/
int _strcmp(char *s1, char *s2)
{
	int result;

	result = ((int)*s1 - 48) - ((int)*s2 - 48);

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (result);
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
		return (result);
	else
		return (0);
}
