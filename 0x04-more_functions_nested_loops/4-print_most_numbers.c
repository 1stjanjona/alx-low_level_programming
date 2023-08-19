#include "main.h"

/**
 * print_most_numbers - check the numbers
 *
 * Description: 'print most numbers'
 *
 * Return: No Return.
*/

void print_most_numbers(void)
{
	int a = 0;

	for (a < 10; a++)
	{
		if (a != 2)
		{
			if (a != 4)
			{
				_putchar(a);
			}
		}
	}
	_putchar('\n');
}
