#include "main.h"
/**
 * _strchr - returns point to first char
 * @s: string args
 * @c: char to be found
 * Return: string s args
 */

char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
