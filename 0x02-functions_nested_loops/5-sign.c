#include <stdio.h>
/**
 * print_sign - function to print the sign of a number
 * @n: number argument
 * Return: number sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1)
	}
}
