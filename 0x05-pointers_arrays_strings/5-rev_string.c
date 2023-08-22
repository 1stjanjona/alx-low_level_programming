#include "main.h"

/**
 * rev_string - check the string
 *
 * @s: 'reverse a string'
 *
 * Return: No return.
*/
void rev_string(char *s)
{
	int i;
	int len = 0;
	int m = len - 1;
	char rev_s = s[0];

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < m  / 2; i++)
	{
		rev_s = s[i];
		s[i] = s[len];
		s[len] = rev_s;
		s[len++];
		s[i--];
	}
}
