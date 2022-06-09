#include "main.h"
/**
 * print_square - function to print square
 * @size: size of square
 * Return: none
 */

void print_square(int size)
{
	int l1, l2;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < size; l2++)
		{
			putchar(35);
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
