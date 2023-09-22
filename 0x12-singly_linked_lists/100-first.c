#include "lists.h"
#include <stdio.h>

void __attribute__ ((constructor)) foo(void);

/**
 * foo - print the winner
 * Description: print this before main
 * Return: no return
*/
void __attribute__ ((constructor)) foo(void)
{
	printf("you're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
