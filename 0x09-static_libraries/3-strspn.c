#include "main.h"
/**
 * _strspn - return number of bytes
 * @s: source string
 * @accept: bytes
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	c = 0;
	for (a = 0; s[a] >= '\0'; a++)
	{
		for (b = 0; accept[b] > '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (accept[b] == '\0')
		{
			break;
		}
	}
	return (c);
}
