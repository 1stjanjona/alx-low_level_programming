#include "main.h"

/**
 * print_rev - check the string
 *
 * @s: 'print the string reversed'
 *
 * Return: No return.
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
