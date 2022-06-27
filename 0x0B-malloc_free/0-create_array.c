#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size needed for arr
 * @c: character
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
	if (size)
	{
		char *arr = malloc(size * sizeof(c));
		while (size--)
		{
			arr[size] = c;
		}
		return arr;
	}
	return (NULL);
}
