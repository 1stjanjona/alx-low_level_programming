#include "main.h"

/**
 * _strcmp - check two strings
 *
 * @s1: 'compare to s2'
 * @s2: 'compare to s1'
 *
 * Return: return(s1[i] - s2[i])
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
