#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print numbers
 * @n: number argument
 * Return: numbers
 */

void print_to_98(int n)
{
	int i, target, comma = 0;

	target = 98;
	if (n <= target)
	{
		for (i = n; i <= target; i++)
		{
			comma == 0 ? comma = 1 : printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= target; i--)
		{
			comma == 0 ? comma = 1 : printf(", ");
			printf("%d", i);
		}
	}
	putchar('\n');
}
