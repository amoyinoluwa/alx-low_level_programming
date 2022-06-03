#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Success
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 100; i++)
	{
		j = (i / 10) + '0';
		k = (i % 10) + '0';
		if ((!(j == k)) && j < k)
		{
			putchar(j);
			putchar(k);
			if (j != (8 + '0') && k != (10 + '0'))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
