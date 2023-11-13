#include "main.h"

/**
 * _islower - Check the code
 *
 * @c: 'is 'c' lowercase'
 *
 * Return: 1 for 'c' is lowercase otherwise Always 0 (Success)
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
