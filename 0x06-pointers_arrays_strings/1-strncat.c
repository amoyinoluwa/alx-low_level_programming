#include "main.h"
/**
 * _strncat - concatenates specified numbers of strs to dest str
 * @dest: destination string
 * @src: source string
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++);
	for (len = 0; src[len] != '\0'; len++);
	n = n > len ? len : n;
	while (j < n && *src)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
