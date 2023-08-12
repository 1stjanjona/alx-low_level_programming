#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'combination'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(num + '0');
		}
	}
	putchar('\n');
	return (0);
}
