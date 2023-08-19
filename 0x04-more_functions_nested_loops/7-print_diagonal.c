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
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
