#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the money
 *
 * @argc: 'argument count'
 * @argv: 'argument vector'
 *
 * Return: 1, Error, 0.
*/
int main(int argc, char *argv[])
{
	int c = 0;
	int cent_coins[] = {25, 10, 5, 2, 1};
	int cents;
	int amount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (c = 0; c < 5; c++)
		{
			while (cents >= cent_coins[c])
			{
				cents -= cent_coins[c];
				amount++;
			}
		}
		printf("%d\n", amount);
	}
	return (0);
}
