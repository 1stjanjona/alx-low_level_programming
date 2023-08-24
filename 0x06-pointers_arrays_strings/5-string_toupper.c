#include "main.h"

/**
 * *string_toupper - check the letters
 *
 * @s: 'change the letters to uppercase'
 *
 * Return: return (s)
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
