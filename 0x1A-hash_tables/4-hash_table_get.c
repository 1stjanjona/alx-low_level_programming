#include "hash_tables.h"
/**
 * hash_table_get - get hash table
 * @ht: hash table
 * @key: key
 * Return: key or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ndx;
	hash_node_t *pass;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key))
	{
		return (NULL);
	}
	ndx = key_index((const unsigned char *)key, ht->size);
	pass = ht->array[ndx];
	while (pass)
	{
		if (!strcmp(pass->key, key))
		{
			return (pass->value);
		}
		pass = pass->next;
	}
	return (NULL);
}
