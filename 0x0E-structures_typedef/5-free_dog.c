#include "dog.h"
/**
 * free_dog - method to free dog
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
