#include "main.h"
/**
 * _strchr - returns point to firts occurn of char
 * @s: string args
 * @c: char to be found
 * Return: string
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
