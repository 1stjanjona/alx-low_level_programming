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
	int i;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar((i * j) + '0');
				}
				else if ((i * j) <= 9 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				else if ((i * j) <= 99 & (i * j) >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else if ((n * i) >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
