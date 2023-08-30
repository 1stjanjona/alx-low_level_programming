#include "main.h"

/**
 * _strlen_recursion - check the string
 *
 * @s: 'return the length of a string'
 *
 * Return: return strlen of s
*/
int _strlen_recursion(char *s)
{
	int size_str = 0;

	if (*s != '\0')
	{
		size_str++;
		size_str += _strlen_recursion(s + 1);
	}
	return (size_str);
}
