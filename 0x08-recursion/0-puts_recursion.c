#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print the string
 *
 * @s: 'the string to be printed'
 *
 * Return: No return.
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
