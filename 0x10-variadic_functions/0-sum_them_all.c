#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the parameters
 * @n: 'number of parameters'
 * @...: 'unkwon n to be calculated'
 * Return: return (all the parameters)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int par_sum = 0;

	va_list par;

	va_start(par, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n && n != 0; i++)
	{
		par_sum += va_arg(par, int);
	}
	va_end(par);
	return (par_sum);
}
