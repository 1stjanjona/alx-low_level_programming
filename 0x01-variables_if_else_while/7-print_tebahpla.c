#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Print alphabet'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char tebah = 'z';

	while (tebah >= 'a')
	{
	putchar(tebah);
	tebah--;
	}
	putchar('\n');
	return (0);
}
