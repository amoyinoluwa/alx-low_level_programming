#include "main.h"
/**
 * _memset - set memory to byte
 * @s: string to be filled
 * @b: byte argument to fill in string
 * @n: number of time to fill in byte
 * Return: string with filled byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: num of members in array
 * @size: size of data type
 * Return: memory allocation.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	
	return (ptr ? ptr : NULL);
}
