#include "main.h"

/**
 * swap_int - check the two integers
 *
 * @a: swap a to b
 * @b: swaop b to a
 *
 * Return: No return.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
