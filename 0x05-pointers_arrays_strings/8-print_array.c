#include "main.h"
#include <stdio.h>

/**
 * print_array - check elements of the array
 *
 * @a: 'array containing the n elements of integers'
 * @n: 'print elements of an array of integers'
 *
 * Return: No return.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
