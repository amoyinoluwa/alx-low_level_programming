#include "main.h"
/**
 * multiply - time table function
 * @n: number argument
 * Return: none
 */

void multiply(int n)
{
	int i, j, k;

	if ((n < 0 || n > 15))
	{
		return;
	}
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
					putchar(' ');
					putchar((k / 10) + '0');
					putchar((k % 10) + '0');
				}
			}
			else
			{
				if (j != 0)
				{
					putchar(' ');
					putchar(' ');
					putchar(k + '0');
				}
				else
				{
					putchar(k + '0');
				}
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
