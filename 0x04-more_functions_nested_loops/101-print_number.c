#include "main.h"

/**
 * print_number - recursive function to print numbers
 * @n: number argument
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		putchar('-');
	}
	if (n != 0)
	{
		print_number(n / 10);
		putchar((n % 10) + '0');
	}
}
