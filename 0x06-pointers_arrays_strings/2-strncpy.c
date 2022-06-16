#include "main.h"
/**
 * strncpy - function to copy str of specified length from src to dest
 * @src: source string
 * @dest: destination string
 * @n: length to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	for (i = 0; src[i] != '\0'; i++);
	if (n <= i)
	{
		for (len = 0; len < n; len++)
		{
			dest[len] = src[len];
		}
	}
	else
	{
		for (len = 0; src[len] != '\0'; len++)
		{
			dest[len] = src[len];
		}
		dest[len] = '\0';
	}
	return (dest);
}
