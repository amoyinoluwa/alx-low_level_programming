#include "main.h"
/** multiply - time table function
 * @n: number argument
 * Return: none
 */

void multiply(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				if (k >= 100)
				{
					putchar(k / 100 + '0');
					putchar((k / 10) % 10 + '0');
					putchar(k % 10 + '0');
				}
				else
				{
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
			}
			else
			{
				if (j != 0)
				{
					putchar(' ');
				}
				putchar((k % 10) + '0');
			}
			if (j != n)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

/**
 * print_times_table - function to print times times of n
 * @n: number argument
 * Return: none
 */

void print_times_table(int n)
{
	if (!(n < 0 || n > 15))
	{
		multiply(n);
	}
	else
	{
		putchar('\0');
	}
}
