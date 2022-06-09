#include "main.h"
/**
 * print_diagonal - function to print diagonal line
 * @n: number of slants
 * Return: none
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	putchar('\n');
}
