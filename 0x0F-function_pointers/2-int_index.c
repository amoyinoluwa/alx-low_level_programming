#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be indexed
 * @size: size of the array
 * @cmp: compare function
 * Return: index of the first element where cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
