#include "main.h"
/**
 * _strpbrk - locates first occurence of str
 * @s: string args
 * @accept: accepted string
 * Return: new s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		if (s[a] == accept[b])
		{
			return (s + a);
		}
		a++;
	}
	return ('\0');
}
