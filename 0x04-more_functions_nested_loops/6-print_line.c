#include "main.h"
/**
 * print_line - function to print line
 * @n: number of times to print line
 * Return: none
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (i <= n)
	{
		putchar('-');
		i++;
	}
	putchar('\n');
}
