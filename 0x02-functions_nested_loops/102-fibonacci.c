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
	unsigned long fib, fibo, sum;

	for (i = 0; i < 50; i++)
	{
		if (fib != fibo)
		{
			sum = fib + fibo;
			printf("%lu", sum);
		}
		else if (fib == fibo)
		{
			sum = fibo;
		}
		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(",");
	}
	return (0);
}
