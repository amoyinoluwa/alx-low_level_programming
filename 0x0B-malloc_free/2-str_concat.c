#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, n;
	char *str = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc((i + j + 1) * sizeof(char));
	n = 0;
	if (str != NULL)
	{
		while (s1[n] != '\0')
		{
			str[n] = s1[n];
			n++;
		}
		k = 0;
		while (s2[k] != '\0')
		{
			str[n] = s2[k];
			k++;
			n++;
		}
		return (str);
	}
	return (NULL);
}
