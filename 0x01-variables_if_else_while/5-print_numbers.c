#include <stdio.h>
/**
 * printVals - recursive function to print characters.
 * @start: first character to be printed
 * @end: last character to be printed
 * Return: Characters from start to end
 */

int printVals(int start, int end)
{
	printf("%d", start++);
	if (start == end)
	{
		return (printf("%d", start));
	}
	return (printVals(start, end));
}

/**
 * main - start of program
 *
 * Return: Success
 */

int main(void)
{
	printVals(0, 9);
	putchar('\n');
	return (0);
}
