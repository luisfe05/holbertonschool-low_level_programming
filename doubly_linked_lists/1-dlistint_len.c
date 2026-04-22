#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	/* Walk through each node until reach NULL */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
