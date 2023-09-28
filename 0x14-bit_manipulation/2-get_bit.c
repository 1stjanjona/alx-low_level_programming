#include "main.h"
/**
 * get_bit - value fo a bit at a given index
 * @n: number
 * @index: index
 * Return: return bit at index, or return (-1)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (n == '\0')
	{
		return (-1);
	}
	if (index == '\0')
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
