#include "main.h"
/**
 * clear_bit - set bit to 0
 * @n: pointer to n
 * @index: index
 * Return: on success return (1), or on error return (-1)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
