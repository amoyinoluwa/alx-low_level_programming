#include "main.h"
/**
 * string_toupper - converts string to upper case
 * @str: string argument
 * Return: Capitalized string
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if ((s[a] >= 'a') && (s[a] <= 'z'))
		{
			s[a] = (s[a] - 32);
		}
		a++;
	}
	return (str);
}
