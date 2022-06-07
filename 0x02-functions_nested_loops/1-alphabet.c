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

/**
 * main - main program
 *
 * Return: Success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
