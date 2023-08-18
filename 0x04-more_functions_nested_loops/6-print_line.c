#include "main.h"

/**
 * print_line - check the lines
 *
 * @n: 'print line numbers'
 *
 * Return: Always 0.
*/
void print_line(int n)
{
	char c = '_';

	if (n > 0)
	{
		_putchar(n * c);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
	return (0);
}
