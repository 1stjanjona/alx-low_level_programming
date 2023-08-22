#include "main.h"

/**
 * puts2 - check the string
 *
 * @str: 'print character of string'
 *
 * Return: no return.
*/
void puts2(char *str)
{
	int i;
	int l;

	i = l - 1;

	char *ch = str;

	while (str[i] != '\0')
	{
		ch++;
		i++;
	}
	for ((i % 2 == 0); i = 0; i <= (l - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
