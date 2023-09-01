#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * @argc: 'size of the array string'
 * @argv: 'string array'
 *
 * Return: always 0.
*/
int main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
