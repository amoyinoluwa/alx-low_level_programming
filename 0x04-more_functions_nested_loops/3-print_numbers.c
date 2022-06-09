#include "main.h"
/**
 * print_numbers - function to print number 0 to 9
 *
 * Return: none
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
