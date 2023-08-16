#include "main.h"

/**
 * jack_bauer - check the day
 *
 * @hrs & @min: 'print every minute from 00:00 to 23:59'
 *
 * Return: no return, it's void
*/

void jack_bauer(void)
{
	int min;
	int hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');

			_putchar('\n');
		}
	}
}
