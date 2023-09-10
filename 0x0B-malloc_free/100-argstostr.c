#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - check the arguments.
 *
 * @ac: 'number of arguments in strings'
 * @av: 'array of strings'
 *
 * Return: return (str).
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, size = 0, args = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[args] = av[i][j];
			args++;
		}
		if (str[args] == '\0')
		{
			str[args] = '\n';
			args++;
		}
	}
	str[args] = '\0';
	return (str);
}
