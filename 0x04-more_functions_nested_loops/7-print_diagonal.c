#include "main.h"
/**
 * print_diagonal - function to print diagonal line
 * @n: number of slants
 * Return: none
 */

void print_diagonal(int n)
{
	int l1, l2;

	for (l1 = 0; l1 < n; l1++)
	{
		for (l2 = 0; l2 < l1; l2++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
