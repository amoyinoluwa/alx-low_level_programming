#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string argument
 * Return: str
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
