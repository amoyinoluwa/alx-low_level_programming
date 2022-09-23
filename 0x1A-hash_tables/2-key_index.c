#include "hash_tables.h"

/**
 * key_index - gets the key index of a node
 * @key: string used in hash function
 * @size: size of hash table
 * Return: index of @key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
