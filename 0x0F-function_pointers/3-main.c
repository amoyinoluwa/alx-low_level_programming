#include "3-calc.h"

/**
 * main - main function to execute operations
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*result)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = get_op_func(argv[2]);

	if (result == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(num1, num2));
	return (0);
}
