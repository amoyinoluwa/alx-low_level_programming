#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments supplied
 * @n: number of args
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	
	va_start(add, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		int val = va_arg(add, int);
		sum += val;
	}
	
	va_end(add);
	return (sum);
}
