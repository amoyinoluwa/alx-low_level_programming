#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string argument
 * Return: void
 */

void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	for (y = x - 1; y >= s[x]; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
