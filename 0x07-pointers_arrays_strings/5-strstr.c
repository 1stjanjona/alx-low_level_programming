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

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				return (needle);
			}
			else if (needle[i] == '\0')
			{
				return (NULL);
			}
		}
		haystack++;
	}
	return (NULL);
}
