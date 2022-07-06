#include "function_pointers.h"

/**
 * print_name - function to execute functions
 * @name: name to be printed
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
	else
	{
		return;
	}
}
