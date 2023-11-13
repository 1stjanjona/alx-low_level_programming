#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * printf - print the win jackpot
 * @format: format
 * @...: ...
 * Return: exit with success
*/
int printf(const char *format, ...)
{
	const char *output = "9 8 10 24 75 + 9\n";

	const char *message = "Congratulations, you win the Jackpot!\n";

	write(1, output, 17);
	write(1, message, 38);
	exit(EXIT_SUCCESS);
}
