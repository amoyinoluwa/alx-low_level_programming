#include "hash_tables.h"
/**
 * hash_table_print - prints all items in hashtable
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					printf("\'%s\': \'%s\'", node->key, node->value);
					if (i != ht->size - 1)
						printf(" ");
					node = node->next;
				}
			}
		}
	}
	printf("}");
}
