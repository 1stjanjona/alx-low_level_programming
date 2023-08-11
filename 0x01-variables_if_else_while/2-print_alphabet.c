#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 *Description: 'Print alphabet'
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	alpha++
	}
	putchar('\n');
	return (0);
}
