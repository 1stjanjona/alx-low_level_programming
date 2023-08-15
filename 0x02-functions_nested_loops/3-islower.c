#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'print lowercase character'
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
