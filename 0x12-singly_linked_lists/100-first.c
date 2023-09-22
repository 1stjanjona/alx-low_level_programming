#include "lists.h"
#include <stdio.h>

__attribute__ ((constructor)) void foo(void);

/**
 * foo - print the winner
 * Description: print this before main
 * Return: no return
*/
void foo(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", s);
}
