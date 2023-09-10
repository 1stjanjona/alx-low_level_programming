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
	int amount;

	cents = atoi(argv[1]);
	(void)argc;

	if (cents != atoi(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	else if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (cents > 0)
	{
		for (c = 0; c < 5; c++)
		{
			for (amount = 0; cents >= cent_coins[c]; amount++)
			{
				cents -= cent_coins[c];
			}
		}
		printf("%d\n", amount);
	}
	return (0);
}
