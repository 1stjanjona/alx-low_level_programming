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

	for (i >= 0; i < 15, i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_ptchar((i % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
