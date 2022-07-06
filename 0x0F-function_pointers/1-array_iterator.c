#include "function_pointers.h"

/**
 * array_iterator - calls a function on an array
 * @array: array arg
 * @size: size of array
 * @action: pointer to array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
	else
	{
		return;
	}
}
