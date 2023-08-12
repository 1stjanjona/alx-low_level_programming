#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'Combination4'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int n;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (n = 50; n < 58; n++)
			{
				if (i < j && j < n)
				{
					putchar(i);
					putchar(j);
					putchar(n);
					if (i != 55 || j != 56 || n != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
