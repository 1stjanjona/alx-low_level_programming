#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_jackpot - print the win jackpot
 * @format: format
 * @...: ...
 * Return: exit with success
*/
int print_jackpot(const char *format, ...)
{
	const char *output;

	output = "9 8 10 24 75 9\nCongratulations, you win the Jackpot!\n";

	write(1, output, 53);

	exit(EXIT_SUCCESS);
}
