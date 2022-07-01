#include "main.h"
/**
 * array_range - creates array of integers
 * @min: min num in array
 * @max: max num in array
 * Return: array with nums
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, diff;

	if (min > max)
		return (NULL);

	diff = max - (min - 1);
	arr = malloc(diff * sizeof(int));
	i = 0;

	if (arr == NULL)
		return (NULL);
	while (i < diff && min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
