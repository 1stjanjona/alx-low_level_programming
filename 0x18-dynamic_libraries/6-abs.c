#include "main.h"

/**
 * _abs - check the value of an integer
 *
 * @n: 'compute the absolute value'
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
	_putchar('\n');
	return (0);
}
