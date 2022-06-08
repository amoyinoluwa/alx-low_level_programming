#include "main.h"
/**
 * add - function to add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int add(int a, int b)
{
	int sum = a + b;

	if (sum >= 10)
	{
		putchar((sum / 10) + '0');
		return (putchar((sum % 10) + '0'));
	}
	else
	{
		return (putchar((sum % 10) + '0'));
	}
}

