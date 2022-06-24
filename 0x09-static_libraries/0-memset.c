#include "main.h"
/**
 * _memset - similar to memset in the C standard library
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
