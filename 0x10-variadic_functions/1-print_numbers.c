#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - check the numbers
 * @separator: 'the string to be printed'
 * @n: 'number of integers'
 * @...: 'unkwon number of integers'
 * Return: No return.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nmbrs;

	va_start(nmbrs, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", separator);
			printf("%d", va_arg(nmbrs, int));
		}
	}
	printf("\n");
	va_end(nmbrs);
}
