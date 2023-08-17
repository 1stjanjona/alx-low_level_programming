#include "main.h"
#include <stdio.h>

/**
 * main - check the 98 first Fibonacci
 *
 * Description: 'no hard code any Fibonacci'
 *
 * Return: Alwaus 0.
*/

int main(void)
{
	int i;
	unsigned long int fib = 0, fibo = 1, sum = 0;

	for (i = 0; i < 98; i++)
	{
		sum = fib + fibo;
		fib = fibo;
		fibo = sum;
		printf("%lu", sum);

		for (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
