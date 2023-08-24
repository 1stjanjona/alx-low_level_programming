#include "main.h"

/**
 * *leet - check the letters
 *
 * @s: 'replace letters by numbers'
 *
 * Return: Return (s)
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char lwup[] = "aAeEoOtTlL";
	char el[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == lwup[j])
			{
				s[i] = el[j];
			}
		}
		i++;
	}
	return (s);
}
