#include "main.h"

/**
 * more_numbers - check the numbers
 *
 * Description: 'print 10 times'
 *
 * Return: No return.
*/
void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			n = j;
			if (j >= 10)
			{
				_putchar(49);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
