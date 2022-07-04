#include "dog.h"
/**
 * init_dog - function to initialized dog structure
 * @d: dog struct pointer
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
};
