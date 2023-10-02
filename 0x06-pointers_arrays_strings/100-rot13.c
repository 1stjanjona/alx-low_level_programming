#include "main.h"

/**
 * *rot13 - encodes string
 *
 * @str: 'use rot13'
 *
 * Return: return (str)
*/
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char str_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		while (j < 52)
		{
			if (str[i] == str_1[j])
			{
				str[i] = str_2[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
