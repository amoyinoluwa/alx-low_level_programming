#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @i: argument
 * Return: Last digit of num
 */

int print_last_digit(int i)
{
	int last;

	if (i < 0)
	{
		last = i * -1;
		return (_putchar((last % 10) + '0'));
	}
	return (_putchar((i % 10) + '0'));
}
