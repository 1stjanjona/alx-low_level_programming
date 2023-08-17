#include "main.h"
#include <stdio.h>

/**
 * main - check for even numbers
 *
 * Description: 'print even fibonacci'
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;
	unsigned long int fib = 1, fibo = 2, sum, sum_sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (fib < 4000000 && (fib % 2) == 0)
		{
			sum += fib;
		}
		sum = fib + fibo;
		fib = fibo;
		fibo = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
