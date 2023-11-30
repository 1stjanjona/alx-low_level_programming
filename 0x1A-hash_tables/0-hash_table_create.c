#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of array
 * Return: return pointer of hash table, or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int ndx;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}

	hashtable->size = size;

	hashtable->array = malloc(size * sizeof(hash_node_t *));
	if (!hashtable->array)
	{
		free(hashtable);
		hashtable = NULL;
		return (NULL);
	}

	for (ndx = 0; ndx < size; ndx++)0
	{
		hashtable->array[ndx] = NULL;
	}
	return (hashtable);
}
