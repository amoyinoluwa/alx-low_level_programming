#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args from command line
 * @argc: arg count
 * @argv: arg vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
