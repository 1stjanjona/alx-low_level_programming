#include "main.h"
#include <stdio.h>

/**
 * main - check Fibonacci code
 *
 * Description: 'print first 50'
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;
	unsigned long fib = 0, fibo = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib + fibo;
		printf("%lu", sum);
		fib = fibo;
		fibo = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
	return (0);
}
