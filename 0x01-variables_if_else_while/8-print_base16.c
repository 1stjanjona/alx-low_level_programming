#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Base 16'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int base;

	for (base = 48; base < 58; base++)
	{
		putchar(base);
	}
	for (base = 97; base < 103; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
