#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - check the variables
 * @format: 'the type of arguments to be printed'
 * @...: 'unknwon arguments'
 * Return: no return.
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = " ";

	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				while (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
				break;
		}
		if (i > 0 && format[i + 1] != '\0')
			sep = ", ";
		i++;
	}
	if (!format || format[i] == '\0')
	{
		printf("\n");
	}
	va_end(args);
}
