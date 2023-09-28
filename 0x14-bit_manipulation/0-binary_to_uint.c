#include "main.h"
/**
 * binary_to_uint - convert a binary number to uint
 * @b: pointer to string
 * Return: return (converted number), or return (0)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int cnvrt = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		cnvrt = cnvrt * 2 + (*b - '0');
		b++;
	}
	return (cnvrt);
}
