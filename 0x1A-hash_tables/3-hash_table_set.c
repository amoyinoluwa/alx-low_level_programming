#include "hash_tables.h"

/**
 * free_mem - frees up unused space
 * @node: node to be freed
 * Return: nothing
 */

void free_mem(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - inserts an element into the hashtable
 * @ht: hash table
 * @key: key of item
 * @value: value of item
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_idx;
	hash_node_t *temp, *node, *current;

	if (key[0] == '\0' || ht == NULL || ht->array == NULL || key == NULL || value == NULL)
		return (0);

	hash_idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[hash_idx];
	temp = node;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->key);
			temp->key = strdup(key);
			if (temp->key == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	current = malloc(sizeof(hash_node_t));
	if (current)
	{
		current->key = strdup(key);
		current->value = strdup(value);
		if (current->key == NULL || current->value == NULL)
		{
			free_mem(current);
			return (0);
		}
		current->next = node;
		node = current;
	}
	else
	{
		return (0);
	}
	return (1);
}
