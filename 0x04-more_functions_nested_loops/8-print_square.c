#include "main.h"

/**
 * print_square - check the size
 *
 * @sqr: 'print square'
 *
 * Return: No return.
*/
void print_square(int size)
{
	int sqr;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sqr = 0; sqr < size; sqr++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
