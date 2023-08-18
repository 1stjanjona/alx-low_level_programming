#include "main.h"

/**
 * print_diagonal - check the diagonal
 *
 * @n: 'print ndiagonals'
 *
 * Return: No return.
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
