#include "main.h"

/**
 * _strlen - check length of a string
 *
 * @s: 'returns the length of a string'
 *
 * Return: Return (_strlen(char *s)).
*/
int _strlen(char *s)
{
	char *s;
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
