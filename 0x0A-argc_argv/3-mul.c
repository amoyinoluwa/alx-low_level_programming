#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	int i = 1, result = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			result *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
