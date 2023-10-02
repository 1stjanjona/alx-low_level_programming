#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * *cap_string - check the first letter
 *
 * @up: 'Capitalize the first letter only'
 * @ch: 'separartors chararcters'
 * @sep: 'array of separartors'
 *
 * Return: return (pointer to up)
*/
int ch_sep(char ch);
char *cap_string(char *up)
{
	int i = 0;
	int sep = 1;
	char *ptr = up;

	while (*up && (up[i] >= 97 && up[i] <= 122))
	{
		if (ch_sep(*up))
		{
			sep = 1;
		}
		else if (lw_ltr(*up) && sep)
		{
			*up -= 32;
			sep = 0;
		}
		else
		{
			sep = 0;
		}
		up++;
	}
	return (ptr);
}
int ch_sep(char ch)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (ch == sep[i])
		{
			return (1);
		}
	}
	return (0);
}
