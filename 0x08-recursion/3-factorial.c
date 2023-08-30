#include "main.h"

/**
 * factorial - check the given number
 *
 * @n: 'factorial of the given number'
 *
 * Return: return (factorial(n))
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
