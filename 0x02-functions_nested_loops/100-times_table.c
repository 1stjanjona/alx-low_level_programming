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
		for (n = 0; n <= 15; n++)
		{
			_putchar('0');

			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');

				if ((n * i) <= 9)
				{
					_putchar(' ');
				}
				else if ((n * i) <= 25)
				{
					_putchar(' ');
				}
				else if ((n * i) <= 144)
				{
					_putchar(((n * i) / 100) + '0');
					_putchar(((n * i) / 10) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
