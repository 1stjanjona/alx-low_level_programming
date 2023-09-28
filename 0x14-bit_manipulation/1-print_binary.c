#include "main.h"
/**
 * print_binary - print binary
 * @n: number to be printed
 * Return: no return
*/
void print_binary(unsigned long int n)
{
	int num = 0;
	int bt = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bt >= 0)
	{
		if ((n >> bt) & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num != '\0')
		{
			_putchar ('0');
		}
		bt--;
	}
}
