#include "main.h"
/**
 * set_bit - set value of bit
 * @n: pointer to n
 * @index: index
 * Return: on success return (1), for error return (-1)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
