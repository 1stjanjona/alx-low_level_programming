#include "main.h"
#include <stddef.h>

/**
 * *_strstr - check the substring
 *
 * @haystack: 'string'
 * @needle: 'substring'
 *
 * Return: return (needle), or return(NULL) if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (*needle == haystack[i])
			{
				return (needle);
			}
			else if (haystack[i] == '\0')
			{
				return (NULL);
			}
		}
		needle++;
	}
	return (NULL);
}
