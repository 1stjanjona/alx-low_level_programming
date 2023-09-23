#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: return (1) for palindrome, otherwise return (0)
*/
int is_palindrome(char *s)
{
	int len = 0, i, j;

	if (s == NULL)
	{
		return (0);
	}
	while (s && s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len && s[i]; i++)
	{
		for (j = len - 1; j > i && s[j]; j--)
		{
			if (s[i] != s[j])
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
	}
	return (1);
}
