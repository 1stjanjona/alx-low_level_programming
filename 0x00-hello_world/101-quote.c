#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'Quote'
 *
 * Return: Always 1 (Fail)
*/

int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

		fprintf(stdout, "%s\n", quote);
	return (1);
}
