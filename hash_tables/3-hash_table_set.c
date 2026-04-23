#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *tmp;
	unsigned long int index;

	/* Check for invalid inputs */
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	/* Get the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists and update value */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value != NULL);
		}
		tmp = tmp->next;
	}

	/* Create a new node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	/* Add new node at the beginning of the list */
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
