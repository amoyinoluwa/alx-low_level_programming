#include <stdio.h>
/**
 * main - main program
 *
 * Return: Success
 */

int main(void)
{
	int i;

	unsigned long second_last, last, temp;

	second_last = 1;
	last = 1;
	printf("%d, ", 1);
	for (i = 0; i < 49; i++)
	{
		temp = last;
		last += second_last;
		second_last = temp;
		printf("%ld", last);
		if (i != 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
