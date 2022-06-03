#include <stdio.h>
/**
 * main - start of main program
 * alpha - recursive function to print characters.
 *
 * Return: Success
 */

int printVals(char start, char end)
{
	putchar(start++);
	if (start == end)
	{
		return putchar(start);
	}
	return printVals(start, end);
}
int main()
{
	printVals('a', 'z');
	printVals('A', 'Z');
	putchar('\n');
	return (0);
}
