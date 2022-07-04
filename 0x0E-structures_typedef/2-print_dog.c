#include "dog.h"
/**
 * print_dog - function to print elements of dog struct
 * @d: dog struct ptr
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name = d->name == NULL ? "(nil)" : d->name;
		printf("Name: %s\n", d->name);
		if (d->age == NULL)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		d->owner = d->owner == NULL ? "(nil)" : d->owner;
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		return;
	}
}
