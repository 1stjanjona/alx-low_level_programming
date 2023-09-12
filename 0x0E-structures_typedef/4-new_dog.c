#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - create new dog
 *
 * @name: 'new dog name & store a copy of old name'
 * @age: 'dog age'
 * @owner: 'new dog owner & store a copy of old owner'
 *
 * Return: it fails return (NULL)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = strdup(name);
	newdog->owner = strdup(owner);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	if (newdog != NULL)
	{
		newdog->name = strdup(name);
		newdog->age = age;
		newdog->owner = strdup(owner);
	}
	return (newdog);
	return (0);
}
