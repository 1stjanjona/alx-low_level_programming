#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - check the strings
 * @separator: 'the string to be printed'
 * @n: 'number of strings'
 * @...: 'unknwon number of strings'
 * Return: no return.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (str != NULL)
		{
			printf("%s", va_arg(str, char*));
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(str);
}
