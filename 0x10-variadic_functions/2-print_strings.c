#include "variadic_functions.h"

/**
 * print_strings - prints all string args
 * @separator: this separates the strings
 * @n: number of arguments
 * Return: str args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ch;

	if (separator == NULL)
		return;

	va_start (str, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg (str, char*);

		if (ch == NULL)
		{
			ch = "(nil)";
		}
		printf("%s", ch);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end (str);
}
