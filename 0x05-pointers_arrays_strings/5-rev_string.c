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

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= (len / 2); i--)
	{
		rev_s = s[i];
		s[i] = [len - 1 - i];
		s[len - 1 - i] = rev_s;
	}
}
