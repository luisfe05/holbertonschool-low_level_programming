#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog
 * @d: pointer to the dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	/* Do nothing if d is NULL */
	if (d == NULL)
		return;

	/* Free name and owner first, then the struct */
	free(d->name);
	free(d->owner);
	free(d);
}
