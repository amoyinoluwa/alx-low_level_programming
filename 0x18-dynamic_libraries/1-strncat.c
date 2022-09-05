#include "main.h"
/**
 * _strncat - concatenates specified numbers of strs to dest str
 * @dest: destination string
 * @src: source string
 * @n: number of chars too concatenate
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
