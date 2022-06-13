#include "main.h"
/**
 * rev_string - function to reverse string
 * @s: string args
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; a > b; b++, a--)
	{
		temp = s[a];
		temp = s[a];
		s[b] = temp;
	}
}
