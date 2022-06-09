#include "main.h"
/**
 * print_line - function to print line
 * @n: number of times to print line
 * Return: none
 */

void print_line(int n)
{
	int line = 0;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
