#include "main.h"
/**
 * print_alphabet_x10 - function to print all alphabets ten times
 *
 * Return: Success
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
