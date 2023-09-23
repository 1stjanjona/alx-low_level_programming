#include "main.h"

/**
 * is_prime_number - check the numbers
 * @n: 'input integer is a prime number or not'
 * Return: is a prime number return (1), otherwise return (0).
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - check if a number is a prime
 * @n: integer to check
 * @i: divisor to test
 * Return: return (1) if n is a prime number, otherwise return (0)
*/
int is_prime(int n, int i)
{
	if ((i * i) > n)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	return (is_prime(n, (i + 1)));
}
