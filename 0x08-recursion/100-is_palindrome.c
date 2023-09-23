#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: return (1) for palindrome, otherwise return (0)
*/
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;
	int j;

	if (s == NULL)
	{
		return (0);
	}
	while (s && s[len] != '\0')
	{
		len++;
	}
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
