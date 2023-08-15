#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 *
 * @c: 'is 'c' alpha'
 *
 * Return: 1 if 'c' is alpha otherwise Always 0 (Success)
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
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
