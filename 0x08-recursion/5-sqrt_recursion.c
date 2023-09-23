#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - check numbers
 * @n: 'return the natural square root of n'
 * Return: return (sqrt of n), or return (-1) if n isn't a natural square
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_handler(n, 1));
}
/**
 * _sqrt_handler - handle initial values
 * @n: the number to find square root of
 * @mid: the current square root
 * Return: return (sqrt of n), or return (-1) if n isn't natural number
*/
int _sqrt_handler(int n, int mid)
{
	int sq_rt = mid * mid;

	if (sq_rt == n)
	{
		return (mid);
	}
	if (sq_rt > n || (mid * mid) < mid)
	{
		return (-1);
	}
	return (_sqrt_handler(n, mid + 1));
}
