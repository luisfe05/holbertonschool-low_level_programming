#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
