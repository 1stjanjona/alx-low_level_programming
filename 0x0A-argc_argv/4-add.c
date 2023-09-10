#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the positive numbers
 *
 * @argc: 'argument count'
 * @argv: 'argument vector of array'
 *
 * Return: no number return (0), symbols return (Error), \n and return (1).
*/
int main(int argc, char *argv[])
{
	int i, j;
	int p = 0;
	int add = 0;
	char c, h;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			p = atoi(argv[i]);
			add += p;
		}
		printf("%d\n", add);
	}

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				p = atoi(argv[i]);
				h = atoi(argv[j]);
				add += (p + h);
			}
		}
		if (argv[i][j] == c)
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
