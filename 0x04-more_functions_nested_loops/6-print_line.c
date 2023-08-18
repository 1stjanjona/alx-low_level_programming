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
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	return (0);
}
