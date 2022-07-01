#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates memory from old to new size
 * @ptr: array containing elements
 * @old_size: size of ptr
 * @new_size: size of new arr
 *
 * Return: new arr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_arr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_arr = malloc(new_size);
	if (new_arr == NULL)
	{
		return (NULL);
	}
	
	old_size = old_size > new_size ? new_size : old_size;
	
	_memcpy(new_arr, ptr, old_size);
	
	free(ptr);
	
	return (new_arr);
}
