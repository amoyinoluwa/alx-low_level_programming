#include <stdio.h>
/**
 * printVals - recursive function to print characters.
 * @start: first character to be printed
 * @end: last character to be printed
 * Return: Characters from start to end
 */

int printVals(char start, char end)
{
	putchar(start++);
	if (start == end)
	{
		return (putchar(start));
	}
	return (printVals(start, end));
}

/**
 * main - start of main program
 *
 * Return: Successs
 */

int main(void)
{
	printVals('a', 'z');
	printVals('A', 'Z');
	putchar('\n');
	return (0);
}
