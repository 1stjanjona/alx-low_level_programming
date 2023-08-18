#include "main.h"

/**
 * _isupper - check the character
 *
 * @c: 'is it upper'
 *
 * Return: c is uppercase returns 1.
 * otherwise returns 0.
*/
int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	return (0);
}
