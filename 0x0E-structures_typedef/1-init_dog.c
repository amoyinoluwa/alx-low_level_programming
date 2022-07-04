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
	d->name = "Poppy";
	d->age = 3.5;
	d->owner = "Alx"
};
