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
	char *str_s = s;
	char *str_r = rev_s;

	while (*str_s)
	{
		len++;
		str_s++;
	}
	while (len > = 0)
	{
		str_s--;
		*str_s = *str_r;
		str_r++;
		len--;
	}
	*str_r = '\0';
}
