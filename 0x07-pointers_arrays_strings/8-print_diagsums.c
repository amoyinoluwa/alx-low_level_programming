#include "main.h"
/**
 * print_diagsums - prints sum of matrix diagonal
 * @a: matrix args
 * @size: size of matrix
 * Return: sum of diagonals
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x];
		sum2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
