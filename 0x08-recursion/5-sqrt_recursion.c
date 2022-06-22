#include "main.h"
/**
 * sqrt_value - recursion function to find square root
 * @a: integer to be squared
 * @b: int b is square of a
 * Return: sqrt val
 */

int sqrt_value(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	if (a * a == b)
	{
		return (a);
	}
	else
	{
		return (sqrt_value((a + 1), b));
	}
}

/**
 * _sqrt_recursion - eval sqrt
 * @n: param val
 * Return: sqrt val
 */

int _sqrt_recursion(int n)
{
	return (sqrt_value(1, n));
}
