#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumber - function to check if input is number
 * @str: string args
 * Return: 0 or 1
 */

int isNumber(char* str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - add numbers supplied to command line
 * @argc: arg count
 * @argv: argc vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
