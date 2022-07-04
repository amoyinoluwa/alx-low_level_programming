#include "dog.h"
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

/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name, *d_owner;

	d_name = _strdup(name);
	d_owner = _strdup(owner);

	if (d_name == NULL || d_owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;

	return (d);
}
