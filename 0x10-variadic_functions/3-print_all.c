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
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if ((int)(str == NULL))
				{
					str = "(nil)";
					printf("%s", str);
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
