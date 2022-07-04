#include "dog.h"
/**
 * free_dog - method to free dog
 * @d: dog struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
