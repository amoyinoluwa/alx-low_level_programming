#include <stdio.h>
/**
 * main - main program to find the largest prime factor
 *
 * Return: Success
 */

int main(void)
{
	long long int n;
	
	n = 612852475143;

	long int divisor = 2, end = 0, max;

	while (n != 0)
	{
		if (n % divisor != 0)
		{
			divisor += 1;
		}
		else
		{
			max = n;
			n /= divisor;
			if (n == 1)
			{
				printf("%d\n", max);
				end = 1;
				break;
			}
		}
	}
	return (0);
}
