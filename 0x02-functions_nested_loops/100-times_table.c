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
			for (i = 0; i <= 15; i++)
			{
				if (i == 0)
				{
					_putchar((n * i) + '0');
				}
				else if (n < 4 && (n * i) <= 9 &&  i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((n * i) + '0');
					_putchar('\n');
				}
				else if ((n * i) <= 25 && n < 6 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((n * i) / 10) + '0');
					_putchar(((n * i) % 10) + '0');
					_putchar('\n');
				}
				else if ((n * i) <= 144 && n < 13 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((n * i) / 100) + '0');
					_putchar(((n * i) / 10) + '0');
					_putchar(((n * i) % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
