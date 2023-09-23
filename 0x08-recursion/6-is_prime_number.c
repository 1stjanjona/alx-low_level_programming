#include "main.h"

/**
 * is_prime_number - check the numbers
 *
 * @n: 'input integer is a prime number or not'
 *
 * Return: is a prime number return (1), otherwise return (0).
*/
int is_prime_number(int n)
{
	int i = 1;
	int d;

	d = n / i;
	if (i >= 1 && i <= n)
	{
		if (d == 1)
		{
			return (1);
		}
		else if (n % d == 0)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
