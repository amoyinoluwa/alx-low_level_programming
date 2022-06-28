#include "main.h"
/**
 * alloc_grid - allocates memory for 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: Two dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));
			if (arr[i] == NULL)
			{
				for (i--; i > 0; i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}
