#include <stdio.h>
#include <stdlib.h>

/**
 * main - main prog to ret num args
 * @argc: args count
 * @argv: args array
 * Return: Success
 */

int main(int argc, char* argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
