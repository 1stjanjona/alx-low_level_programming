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

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		char *rev_s;

		s--;
		*rev_s = *s;

		_putchar(*rev_s++);
		i--;
	}
	_putchar('\n');
}
