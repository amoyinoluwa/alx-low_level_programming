#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of specified size
 * @size: size of hash table
 * Return: address of new hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->array = malloc(size * sizeof(hash_node_t*));
	if (hash->array == NULL)
		return (NULL);
	hash->size = size;
	for (i = 0; i < hash->size; i++)
	{
		hash->array[i] = NULL;
	}

	return (hash);
}
