#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * *cap_string - check the first letter
 *
 * @up: 'Capitalize the first letter only'
 *
 * Return: return (pointer to up)
*/
char *cap_string(char *up)
{
	int i = 0;
	int j = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	char *ptr = up;

	while (*up)
	{
		while (up[i] >= 'a' && up[i] <= 'z')
		{
			i++;
			for (j++; j < 12;)
			{
				if (up[i] == sep[j])
				{
					i++;
					up[i] -= 32;
				}
				else
					i++;
			}
		}
		i++;
	}
	return (ptr);
}
