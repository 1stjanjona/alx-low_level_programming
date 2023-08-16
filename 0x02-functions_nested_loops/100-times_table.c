#include "main.h"

/**
 * print_times_table - check the n value
 *
 * @n: 'print n times table'
 *
 * Return: No return
*/

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				_putchar((i * j) + '0');
				else if ((i * j) < 10 && j != 0)
				{
					_putchar(' ');
				} else if ((i * j) <= 99)
				{
					_putchar(' ');
				} else if ((i * j) >= 100)
				{
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
				} else if ((i * j) < 100 && (i * j) >= 10)
				{
					_putchar(((i * j) / 10) + '0');
				}
				_putchar(((i * j) % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
