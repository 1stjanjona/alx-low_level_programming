#ifndef DOG_H
#define DOG_H

/**
 * struct dog - ID of a dog
 *
 * Descriptio: 'we have a dog in front of macbook'
 * @name: 'name of a dog'
 * @age: 'age of a dog'
 * @owner: 'owner of a dog'
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
}
;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
