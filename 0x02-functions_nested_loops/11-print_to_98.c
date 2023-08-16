#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the numbers
 *
 * @n: 'print all n to 98'
 *
 * Return: No return
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (n = i; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);

			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (n = i; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
