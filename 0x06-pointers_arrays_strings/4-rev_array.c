#include "main.h"
/**
 * reverse_array - function to reverse the contents of an array
 * @a: array
 * @n: size of array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n / 2; c++)
	{
		d = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = d;
	}
}
