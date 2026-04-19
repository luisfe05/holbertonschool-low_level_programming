#include "dog.h"
#include <stdlib.h>

/**
 * str_len - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * str_copy - copies a string into newly allocated memory
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
char *str_copy(char *s)
{
	char *copy;
	int i;

	copy = malloc(str_len(s) + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* Allocate memory for the struct */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocate and copy name */
	dog->name = str_copy(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Allocate and copy owner */
	dog->owner = str_copy(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;
	return (dog);
}
