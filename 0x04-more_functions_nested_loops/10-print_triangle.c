#include "main.h"
/**
 * print_triangle - prints triangle
 * Description: This prints a triangle in the terminal
 * @size: size of triangle
 * Return: none
 */

void print_triangle(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size - row; col > 0; col--)
			{
				putchar(' ');
			}
			for (col = 0; col < row; col++)
			{
				putchar('#');
			}
			if (row == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
