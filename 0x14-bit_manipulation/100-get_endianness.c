#include "main.h"
/**
 * get_endiannes - check endianness
 * Return: return (0) if big endian, if little endian return (1)
*/
int get_endianness(void)
{
	unsigned int nmbr = 1;
	char *byt = (char *)&nmbr;

	if (*byt == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (*byt);
}
