#include "main.h"
/**
 * free_grid - frees up allocatedd memory
 * @grid: 2d array
 * @height: num of rows
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
