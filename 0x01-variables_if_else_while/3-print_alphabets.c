#include <stdio.h>
/**
 * main - start of main program
 * printVals - recursive function to print characters.
 * @start: first character to be printed
 * @end: last character to be printed
 * Return: Success
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
int main(void)
{
	printVals('a', 'z');
	printVals('A', 'Z');
	putchar('\n');
	return (0);
}
