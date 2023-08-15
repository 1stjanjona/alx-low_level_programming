#include "main.h"

/**
 * print_last_digit - check the digits of a number
 *
 * @num: 'print the last digit'
 *
 * Return: value of last digit
*/

int print_last_digit(int num)
{
	int lst_dgt;

	if (num > 0)
	{
		lst_dgt = (n % 10);
	}
	else
	{
		lst_dgt = ((-1) * (n % 10));
	}
	_putchar(lst_dgt + '0');
	_putchar('\n');
	return (lst_dgt);
}
