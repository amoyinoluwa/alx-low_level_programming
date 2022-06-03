#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Success
 */

int main(void)
{
	int n, num, val;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	val = abs(num);
	if (val == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (val > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (val < 6 && val != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
