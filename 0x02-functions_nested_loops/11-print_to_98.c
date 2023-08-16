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

	if (n >= 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);

			else
				printf("98\n");
		}
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("98\n");
		}
	}
	else
	{
		for (i = n; i != 0; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
