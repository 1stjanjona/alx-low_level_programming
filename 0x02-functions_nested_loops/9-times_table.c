#include "main.h"

/**
 * times_table - check the table
 *
 * Description: 'print a number 9 times'
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
			_putchar(n * i);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
