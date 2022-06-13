#include "main.h"
/**
 * swap_int - function to swap
 * @a: first int address
 * @b: second int address
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
