#include "lists.h"
#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - print the winner
 * Description: print this before main
 * Return: no return
*/
void _constructor(void)
{
	printf("you're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
