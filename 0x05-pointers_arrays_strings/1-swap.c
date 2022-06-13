#include "main.h"
/**
 * swap_int - function to swap
 * @a: first address
 * @b: second address
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int *temp;
	temp = a;
	a = b;
	b = temp;
}
