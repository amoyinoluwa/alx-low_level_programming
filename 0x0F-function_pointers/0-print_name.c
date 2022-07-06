#include "function_pointers.h"

/**
 * print_name - function to execute functions
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
