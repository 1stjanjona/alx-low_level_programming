#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * is_palindrome - check for palindrome
 * @s: string
 * Return: return (1) for palindrome, otherwise return (0)
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	s++;
	len -= 2;

	return (is_palindrome(s + 1));
}
