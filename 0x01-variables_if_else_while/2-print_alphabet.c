#include <stdlib.h>
#include <stdio.h>
/**
 * main - code to print lowercase letters
 *
 * Return: Success
 */

int main(void)
{
	char i = 'a';

	while (i < 'z')
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
