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
	char c;

	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
