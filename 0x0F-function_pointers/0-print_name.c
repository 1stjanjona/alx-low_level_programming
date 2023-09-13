#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print name
 * @f: 'function pointer'
 * @name: 'the name to be printed'
 * Return: no return
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
