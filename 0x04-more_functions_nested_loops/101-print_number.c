#include "main.h"

/**
 * print_number - function to print a number
 * @n: number argument
 * Description: Uses putchar to print long numbers
 * Return: none
 */

void print_number(int n)
{
	int digit, count, temp;
	
	digit = n;
	count = 0;

	if (digit < 0)
	{
		_putchar('-');
	}
	for (temp = 1; digit > 9 || digit < -9; temp *= 10)
	{
		digit /= 10;
		count++;
	}
	for (digit = n; count >= 0; count--)
	{
		if (digit / temp < 0)
		{
			_putchar(((digit / temp) * -1) + '0');
		}
		else
		{
			_putchar(digit / temp + '0');
		}
		digit %= temp;
		temp /= 10;
	}
}
