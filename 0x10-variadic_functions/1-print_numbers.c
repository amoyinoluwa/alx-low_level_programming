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

	va_start (args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg (args, int));

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg (args, int));
	va_end (args);
}
