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
	unsigned long fib, fibo, sum, sum_sum;

	for (i = 1; i <= 33; i++)
	{
		if (fib < 4000000 && (fib % 2) == 0)
			sum += fib;
		sum_sum = fib + fibo;
		fib = fibo;
		fibo = fib;
		fib = sum_sum;
	}
	printf("lu\n", sum);
	return (0);
}
