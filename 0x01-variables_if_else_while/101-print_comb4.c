#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Success
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = (i / 100) + '0';
		k = (i % 100) / 10 + '0';
		l = (i % 10) + '0';
		if (!(((j == k) && (k == l))) && (((j < k) && (k < l))))
		{
			putchar(j);
			putchar(k);
			putchar(l);
			if (j != (7 + '0') && k != (9 + '0') && l != (10 + '0'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
