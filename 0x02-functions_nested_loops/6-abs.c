#include "main.h"

/**
 * _abs - check the value of an integer
 *
 * @int: 'compute the absolute value'
 *
 * Return: Always 0 (Success)
*/

int _abs(int)
{
	int n;

	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n * (-1));
	}
	_putchar('\n');
	return (0);
}
