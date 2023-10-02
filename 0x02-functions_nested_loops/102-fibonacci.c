#include "main.h"
#include <stdio.h>

/**
 * main - check Fibonacci code
 *
 * Description: 'print first 98'
 *
 * Return: Always 0.
*/

/**
 * print_fibonacci - print fibonacci
 * @n: number to be printed
 * Return: No return
*/
void print_fibonacci(int n)
{
	int i;
	unsigned long fib = 1, fibo = 2, sum;

	if (n >= 1)
	{
		printf("%lu", fib);
		if (n > 1)
		{
			printf(", ");
		}
	}
	if (n >= 2)
	{
		printf("%lu", fibo);
		if (n > 2)
		{
			printf(", ");
		}
	}
	for (int i = 3; i <= n; i++)
	{
		sum = fib + fibo;
		printf(", %d", sum);
		fib = fibo;
		fibo = sum;
	}
	printf("\n");
}
int main(void)
{
	print_fibonacci(98);
	return (0);
}
