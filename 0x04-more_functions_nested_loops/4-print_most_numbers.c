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

	for (a = 48; a < 58; a++)
	{
		if (a != 50 || a != 52)
		{
			continue;
			_putchar(a);
		}
	}
	_ptchar('\n');
}