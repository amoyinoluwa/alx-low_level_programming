#include "main.h"
/**
 * prime - prints prime
 * @a: first int arg
 * @b: second int arg
 * Return: prime nums
 */

int prime(int a, int b)
{
	if (b == 1 || b == 25)
	{
		return (0);
	}
	else if (b <= 0)
	{
		return (0);
	}
	else if (b % 2 == 0)
	{
		return (0);
	}
	else if (b % 2 != 0)
	{
		return (1);
	}
	return (prime(a * (a + 1), b));
}

/**
 * is_prime_number - checks if input is prime
 * @n: int args
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int x = 1;

	return (prime(x, n));
}
