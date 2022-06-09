#include "main.h"
/**
 * print_number - function to print a number
 * @n: number argument
 * Return: none
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
