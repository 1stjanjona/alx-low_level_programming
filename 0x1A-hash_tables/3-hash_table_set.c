#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ndx;
	hash_node_t *nwd, *pass;

	if (!ht || !key || !*key)
	{
		return (0);
	}
	ndx = key_index((const unsigned char *)key, ht->size);
	pass = ht->array[ndx];
	while (pass != NULL)
	{
		if (!strcmp(pass->key, key))
		{
			free(pass->value), pass->value = NULL;
			pass->value = strdup(value);
			if (!pass->value)
			{
				return (0);
			}
			return (1);
		}
		pass = pass->next;
	}
	nwd = malloc(sizeof(hash_node_t));
	if (!nwd)
	{
		return (0);
	}
	nwd->key = strdup(key);
	if (!nwd->key)
	{
		free(nwd), nwd = NULL;
		return (0);
	}
	nwd->value = strdup(value);
	if (!nwd->value)
	{
		free(nwd->key), nwd->key = NULL, free(nwd), nwd = NULL;
		return (0);
	}
	nwd->next = ht->array[ndx], ht->array[ndx] = nwd;
	return (1);
}
