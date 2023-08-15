#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'print alphabets 10 times'
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
