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
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j == i)
					_putchar(32);
				if (j < i)
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
