#include "main.h"
/**
 * _strcat - concatenates src str to dest str
 * @dest: destination string
 * @src: source string
 * Return: Pointer to merged string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
