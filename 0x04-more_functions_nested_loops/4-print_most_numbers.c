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
	int a;

	while (a = 0, a < 10)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '48');
		}
	}
	a++;
	_putchar('\n');
}
