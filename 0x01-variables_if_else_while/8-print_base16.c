#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Success
 */

int main(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
