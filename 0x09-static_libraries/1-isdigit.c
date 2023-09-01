#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c: 'digit(0 through 9)'
 *
 * Return: 1 if c is a digit
 * otherwise return 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
