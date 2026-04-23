#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	/* Check for invalid inputs */
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	/* Get the index for this key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Walk through the list at this index */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		/* Return value if key matches */
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	/* Key not found */
	return (NULL);
}
