#include "variadic_functions.h"

/**
 * print_numbers - print numbers supplied to func
 * @separator: separator
 * @n: number of args
 * Return: nums
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, const unsigned int));
		
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
