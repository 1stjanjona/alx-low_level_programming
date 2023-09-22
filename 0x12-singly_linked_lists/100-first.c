#include "lists.h"
#include <stdio.h>

void winner(void) __attribute__((constructor));
/**
 * winner - print the winner
 * Description: print this before main
 * Return: no return
*/
void winner(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
