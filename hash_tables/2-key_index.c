#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Hash the key and fit it within the array size */
	return (hash_djb2(key) % size);
}
