#include "main.h"
/**
 * get_bit - value fo a bit at a given index
 * @n: number
 * @index: index
 * Return: return bit at index, or return (-1)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
