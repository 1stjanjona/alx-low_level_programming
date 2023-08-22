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
	int len = -1;
	char s[i];
	char rev_s[i];
	char *s = s;
	char *rev_s = rev_s;

	while (*s)
	{
		len++;
		s++;
	}
	while (len > = 0)
	{
		s--;
		*s = *rev_s;
		s++;
		len--;
	}
	*rev_s = '\0';
}
