#include "main.h"
/**
 * _calloc - allocates memory for array
 * @nmemb: num of members in array
 * @size: size of data type
 * Return: memory allocation.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **ptr = malloc(nmemb * size);
	int i;
	void *j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			j = (ptr + i);
			j = 0;
		}
		return (ptr);
	}
	return (NULL);
}
