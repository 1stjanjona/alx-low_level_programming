#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ndx = 0;
	int printed = 1;
	char **kys;
	hash_node_t *pass;

	if (!ht || !ht->array)
	{
		return;
	}
	kys = malloc(sizeof(char *) * ht->size);
	if (!kys)
	{
		return;
	}
	for (ndx = 0; ndx < ht->size; ndx++)
	{
		pass = ht->array[ndx];
		while (pass)
		{
			kys[ndx] = strdup(pass->key);
			if (!kys[ndx])
			{
				free(kys), kys = NULL;
				return;
			}
			pass = pass->next;
		}
	}
	printf("{");
	for (ndx = 0; ndx < ht->size; ndx++)
	{
		pass = ht->array[ndx];
		while (pass)
		{
			if (!printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", pass->key, pass->value);
			pass = pass->next;
			printed = 0;
		}
	}
	printf("}\n");
}
