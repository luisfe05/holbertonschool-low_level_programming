#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the new hash table, or NULL if it failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/* Allocate memory for the hash table */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Set the size */
	ht->size = size;

	/* Allocate memory for the array of node pointers */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Set all slots to NULL */
	i = 0;
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
