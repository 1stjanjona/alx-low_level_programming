#include "main.h"

/**
 * times_table - check the table
 *
 * Description: 'print a number 9 times table'
 *
 * Return: No return
*/

void times_table(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{

		for (i = 0; i < 10; i++)
		{
			if (i == 0)
			{
				_putchar((n * i) + '0');
			}

			else if ((n * i) < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((n * i) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((n * i) / 10) + '0');
				_putchar(((n * i) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
