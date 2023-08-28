#include "main.h"

/**
 * *_strchr - check charactes in string
 *
 * @s: 'string'
 * @c: 'character in a string'
 *
 * Return: return s to the first occurence of c.
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
