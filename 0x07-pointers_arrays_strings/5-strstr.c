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
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			haystack++;
		}
		else if (*needle != '\0')
		{
			return (needle);
		}
		else if (*needle == '\0')
		{
			return (NULL);
		}
		haystack++;
	}
	return (NULL);
}
