#include "hash_tables.h"
/**
 * hash_table_get - gets a value associated with a key
 * @ht: hash table to be queried
 * @key: the key associated with value
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node, *curr;

	if (key[0] == '\0' || key == NULL || ht == NULL)
		return (NULL);
	
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	curr = node;

	return (curr ? curr->value : NULL);
/*
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
	}
	return (NULL);
*/
}
