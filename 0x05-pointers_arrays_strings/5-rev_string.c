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
	int i = 0;
	int len = i + 1;
	char rev_s = s[0];

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < len; i++)
	{
		i--;
		rev_s = s[i];
		s[i] = s[len];
		s[len] = rev_s;
	}
}
