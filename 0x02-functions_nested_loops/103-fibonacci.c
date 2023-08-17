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
		sum = fib + fibo;

		if (sum < 4000000 && (sum % 2) == 0)
			sum_sum += sum;
		fib = fibo;
		fibo = sum;
	}
	printf("%lu\n", sum);
	return (0);
}
