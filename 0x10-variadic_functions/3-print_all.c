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
	int i = 0, j = 0;
	char *str, *sep = " ";

	va_list types;

	va_start(types, format);

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
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sep, str);
				break;
			default:
				j = 1;
				break;
		}
		if (j == 0)
		{
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
