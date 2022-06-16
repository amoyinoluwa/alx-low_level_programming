#include "main.h"
/**
 * _strncpy - function to copy str of specified length from src to dest
 * @src: source string
 * @dest: destination string
 * @n: length to copy
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
