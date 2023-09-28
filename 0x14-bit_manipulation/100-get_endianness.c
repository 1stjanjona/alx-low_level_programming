#include "main.h"
/**
 * get_endianness - check endianness
 * Description: print the endian
 * Return: return (0) if big endian, if little endian return (1)
*/
int get_endianness(void)
{
	unsigned int nmbr = 1;

	if (*(char *)&nmbr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
