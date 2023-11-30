#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: key
 * @size: size
 * Return: return hash_djb2
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
