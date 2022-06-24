#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		break;
	}
	return (0);
}
