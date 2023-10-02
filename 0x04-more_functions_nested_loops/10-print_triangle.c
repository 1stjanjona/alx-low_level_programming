#include "main.h"

/**
 * print_triangle - check the triangle
 *
 * @size: 'print size of triangle'
 *
 * Return: No return.
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < size; i++)
		{
			for (i == 1)
			{
				_putchar(' ');
				_putchar(35);
				_putchar('\n');
			}
			for (i == 2)
			{
				_putchar(35+35);
				_ptchar('\n');
			}
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
