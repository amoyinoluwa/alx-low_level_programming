#include "main.h"
/**
 * factorial - factorial of a num
 * @n: int args
 * Return: factorial
 */

int factorial(int n)
{
	if (n > 0)
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	return (-1);
}
