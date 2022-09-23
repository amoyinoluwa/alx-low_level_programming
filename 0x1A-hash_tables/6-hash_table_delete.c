#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hashtable
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currNode;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				currNode = ht->array[i]->next;
				free_mem(ht->array[i]);
				ht->array[i] = currNode;
			}
		}
	}
	free(ht->array);
	free(ht);
}
