#include "hash_tables.h"
/**
 * count - counts number of valid items in hash table
 * @ht: hash table
 * Return: count
 */

unsigned long int count(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *node;

	count = 0;
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					count++;
					node = node->next;
				}
			}
		}
	}
	return (count);
}

/**
 * hash_table_print - prints all items in hashtable
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, items;
	hash_node_t *node;

	items = 0;
	printf("{");
	if (count(ht))
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				while (node)
				{
					printf("\'%s\': \'%s\'", node->key, node->value);
					items++;
					if (items < count(ht))
						printf(", ");
					node = node->next;
				}
			}
		}
	}
	printf("}\n");
}
