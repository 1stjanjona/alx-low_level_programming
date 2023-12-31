#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: 'struct dog pointer'
 * @name: 'dog name'
 * @age: 'dog age'
 * @owner: 'dog owner'
 *
 * Return: No return.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
