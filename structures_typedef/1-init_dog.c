#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Do nothing if d is NULL */
	if (d == NULL)
		return;

	/* Set each field of the struct */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
