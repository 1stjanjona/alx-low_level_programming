#include "main.h"
#include <stddef.h>

/**
 * *_strstr - check the substring
 * @haystack: 'string'
 * @needle: 'substring'
 * Return: return (needle), or return(NULL) if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while ((*n != '\0') && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
