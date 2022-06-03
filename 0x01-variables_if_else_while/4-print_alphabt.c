#include <stdio.h>
/**
 * main - entry point of program
 *
 * Return: Success
 */

int main(void) {
	char i;

	for (i = 'a'; i <= 'z'; i++)
       	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
