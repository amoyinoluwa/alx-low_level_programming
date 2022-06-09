#include <stdio.h>
/**
 * main - main program to print fizz buzz
 * Description: mul to 3 is fizz, mul of 5 is buzz, 15 is fizzbuzz
 * Return: Success
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
