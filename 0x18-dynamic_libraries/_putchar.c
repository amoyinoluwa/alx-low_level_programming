#include <unistd.h>

/**
 * _putchar - writes output to stdout
 * @c: char arg
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
