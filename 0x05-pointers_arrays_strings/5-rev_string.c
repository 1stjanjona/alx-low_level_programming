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
	int l;

	l = strlen(s);

	char *start, *end, ch;

	start = s;
	end = s;

	for (i = 0; i < l - 1; i++)
	{
		end++;
	}
	for  (i = 0; i < l / 2; i++)
	{
		ch = *end;
		*end = *start;
		*start = ch;
		start++;
		end--;
	}
}
