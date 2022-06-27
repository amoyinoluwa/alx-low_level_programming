#include "main.h"
/**
 * _strdup - return ptr to new str with copy of input
 * @str: input string
 * Return: copy of str
 */

char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *copy = NULL;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		n++;
	}
	copy = malloc((n + 1) * sizeof(char));

	if (copy != NULL)
	{
		for (i = 0; i < n; i++)
		{
			copy[i] = str[i];
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
