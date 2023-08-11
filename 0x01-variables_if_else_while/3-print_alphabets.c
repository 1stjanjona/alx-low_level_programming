#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'lower and upper cases'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ALPHA = 'A';

	char alpha = 'a';

	while (ALPHA <= 'Z')
	{
	putchar(ALPHA);
	ALPHA++;
	}
	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
