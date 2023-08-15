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
	int min = 0;
	int hrs = 0;

	while (hrs < 24)
	{
		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
		}
		min++;
	}
	hrs++;

	_putchar('\n');
}
