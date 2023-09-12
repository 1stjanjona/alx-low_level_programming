#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 *
 * @d: 'dog_t pointer'
 *
 * Return: No return.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
