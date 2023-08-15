#include "main.h"

/**
 * print_last_digit - check the digits of 'num'
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
		lst_dgt = (num % 10);
	}
	else
	{
		lst_dgt = ((-1) * (num % 10));
	}
	_putchar(lst_dgt + '0');
	return (lst_dgt);
	_putchar('\n');
}
