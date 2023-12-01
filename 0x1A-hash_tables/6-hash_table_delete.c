#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ndx;
	hash_node_t *dlt, *pass;

	if (!ht || !ht->array || !ht->size)
	{
		return;
	}
	for (ndx = 0; ndx < ht->size; ndx++)
	{
		dlt = ht->array[ndx];
		while (dlt)
		{
			pass = dlt->next;
			free(dlt->key), dlt->key = NULL;
			free(dlt->value), dlt->value = NULL;
			free(dlt), dlt = NULL;
			dlt = pass;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
	ht = NULL;
}
