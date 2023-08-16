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
		_putchar(0);

		for (i = 1; i < 10; i++)
		{
			_putchar(',');
			_putchar(' ');

			if ((n * i) < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(((n * i) / 10) + '0');
				_putchar(((n * i) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
