#include "main.h"

/**
 * _puts - check the string
 *
 * @str: 'print a string'
 *
 * Return: No return.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
