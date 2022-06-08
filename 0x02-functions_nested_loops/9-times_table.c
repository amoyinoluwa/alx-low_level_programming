#include "main.h"
/**
 * times_table - function to print the time table
 *
 * Return: none
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k > 10)
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar((k % 10) + '0');
			}
			if (j != 9)
			{
				putchar(',');
			}
		}
		putchar('\n');
	}
}

