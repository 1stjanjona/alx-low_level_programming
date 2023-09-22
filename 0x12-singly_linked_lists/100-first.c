#include "lists.h"
#include <stdio.h>

/**
 * bmain - print the winner
 * Description: print this before main
 * Return: no return
*/
void __attribute__((constructor)) bmain()
{
	printf("you're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
