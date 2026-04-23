#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int first;

	/* Do nothing if ht is NULL */
	if (ht == NULL)
		return;

	printf("{");
	first = 1;
	i = 0;

	/* Walk through each slot in the array */
	while (i < ht->size)
	{
		tmp = ht->array[i];

		/* Walk through each node in the linked list */
		while (tmp != NULL)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 0;
			tmp = tmp->next;
		}
		i++;
	}

	printf("}\n");
}
