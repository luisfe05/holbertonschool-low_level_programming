#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	/* Add at beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Walk to the node just before idx */
	tmp = *h;
	i = 0;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	/* If idx is out of range return NULL */
	if (tmp == NULL)
		return (NULL);

	/* If inserting at the end use add_dnodeint_end */
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Set value and link new node between tmp and tmp->next */
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
