#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: return (s), or return (NULL) if the substring is not found
*/
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
