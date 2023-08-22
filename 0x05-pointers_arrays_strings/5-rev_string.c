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
	int len;
	char rev_s = s[0];

	while (len = 0, s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <  (len / 2); i++)
	{
		rev_s = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = rev_s;
	}
}
