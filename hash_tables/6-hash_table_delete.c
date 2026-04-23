#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *next;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* Walk through each slot in the array */
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];

		/* Walk through each node and free it */
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
		i++;
	}

	/* Free the array and the hash table struct */
	free(ht->array);
	free(ht);
}
