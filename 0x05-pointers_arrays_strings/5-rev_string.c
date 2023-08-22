#include "main.h"
#include <string.h>

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
	char *frst;
	char *end;
	char ch_s;

	l = strlen(s);
	frst = s;
	end = s;

	for (i = 0; i < l - 1; i++)
	{
		end++;
	}
	for  (i = 0; i < l / 2; i++)
	{
		ch_s = *end;
		*end = *frst;
		*frst = ch_s;
		frst++;
		end--;
	}
}
