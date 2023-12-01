#include "hash_tables.h"
/**
 * shash_table_create - create shash table
 * @size: size
 * Return: shash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted;

	sorted = malloc(sizeof(shash_table_t));
	if (!sorted)
	{
		return (NULL);
	}
	sorted->size = size;
	sorted->shead = NULL;
	sorted->stail = NULL;
	sorted->array = malloc(sizeof(shash_node_t) * size);
	if (!sorted->array)
	{
		free(sorted), sorted = NULL;
		return (NULL);
	}
	sorted->shead = NULL;
	sorted->stail = NULL;
	return (sorted);
}
/**
 * shash_table_set - set shash table
 * @ht: hash table
 * @key: key
 * @value: velue
 * Return: return int
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ndx;
	char *vl;
	shash_node_t *snwd, *pass;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key) || !value)
	{
		return (0);
	}
	ndx = key_index((const unsigned char *)key, ht->size);
	pass = ht->array[ndx];
	while (pass)
	{
		if (!strcmp(pass->key, key))
		{
			vl = strdup(value);
			if (!vl)
			{
				return (0);
			}
			free(pass->value);
			pass->value = NULL;
			pass->value = vl;
			return (1);
		}
		pass = pass->next;
	}
	snwd = malloc(sizeof(shash_node_t));
	if (!snwd)
	{
		return (0);
	}
	snwd->next = ht->array[ndx];
	ht->array[ndx] = snwd;
	return (1);
}
/**
 * shash_table_get - get shash table
 * @ht: hash table
 * @key: key
 * Return: return char
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ndx;
	shash_node_t *pass;

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
/**
 * shash_table_print - print shash table
 * @ht: hash table
 * Return: no return
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *pass;

	if (!ht || !ht->array)
	{
		return;
	}
	printf("{");
	pass = ht->shead;
	while (pass)
	{
		printf("'%s': '%s'", pass->key, pass->value);
		if (pass->snext)
		{
			printf(", ");
		}
		pass = pass->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print shash table in reversed order
 * @ht: hash table
 * Return: no return
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *pass;

	if (!ht || !ht->array)
	{
		return;
	}
	printf("{");
	pass = ht->stail;
	while (pass)
	{
		printf("'%s': '%s'", pass->key, pass->value);
		if (pass->sprev)
		{
			printf(", ");
		}
		pass = pass->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete shash table
 * @ht: hash table
 * Return: no return
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int ndx;
	shash_node_t *snwd, *pass;

	if (!ht || !ht->array || !ht->size)
	{
		return;
	}
	for (ndx = 0; ndx < ht->size; ndx++)
	{
		snwd = ht->array[ndx];
		while (snwd)
		{
			pass = snwd->next;
			free(snwd->key), snwd->key = NULL;
			free(snwd->value), snwd->value = NULL;
			free(snwd), snwd = NULL;
			snwd = pass;
		}
	}
	free(ht->array), ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht), ht = NULL;
}
