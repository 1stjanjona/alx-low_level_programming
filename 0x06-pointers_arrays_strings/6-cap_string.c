#include "main.h"

/**
 * *cap_string - check the first letter
 *
 * @up: 'Capitalize the first letter only'
 *
 * Return: return (up)
*/
char *cap_string(char *up)
{
	int i = 0;
	int j = 0;
	char  c[j] = "\0 \t\n,;.!?\"(){}";

	while (up[i])
	{
		while (up[i]  >= 'a' && up[i] <= 'z')
		{
			i++;
			j++;
			for (up[i] == c[j];)
			{
				i++;
				up[i] -= 32;
			}
		}
		i++;
	}
	return (up);
}
