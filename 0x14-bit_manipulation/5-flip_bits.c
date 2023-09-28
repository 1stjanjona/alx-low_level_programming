#include "main.h"
/**
 * flip_bits - return the needed bits
 * @n: number
 * @m: number too
 * Return: return bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_flip;
	unsigned int bts = 0;

	xor_flip = n ^ m;
	while (xor_flip > 0)
	{
		bts += xor_flip & 1;
		xor_flip >>= 1;
	}
	return (bts);
}
