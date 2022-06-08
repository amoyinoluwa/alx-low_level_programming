#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print numbers up to 98
 *
 * @n: number argument
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", 98);
	}
	else
	{
		while (98 < n)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", 98);
	}
	putchar('\n');
}
