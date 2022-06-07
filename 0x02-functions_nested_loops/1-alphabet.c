#include "main.h"
/**
 * print_alphabet - function to print alphabets
 *
 * Return: Alphabets
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
