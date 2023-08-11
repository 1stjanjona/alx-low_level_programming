#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'Print alphabets'
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	char C;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	for (c = 'a'; c <= 'z'; ++c)
	{
	putchar("%c", c);
	}
	return (0);
}
