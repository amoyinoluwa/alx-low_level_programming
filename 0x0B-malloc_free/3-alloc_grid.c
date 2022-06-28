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
	int **arr = malloc(height * sizeof(int *));

	if (width < 1 || height < 1)
	{
		free(arr);
		return (NULL);
	}
	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));
			if (arr[i] == NULL)
			{
				for(; i > 0; i--)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
		}
	}
	else
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr == NULL ? NULL : arr);
}
