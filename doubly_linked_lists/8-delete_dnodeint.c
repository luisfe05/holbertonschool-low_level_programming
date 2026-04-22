#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	/* Return -1 if list is empty */
	if (*head == NULL)
		return (-1);

	/* Walk to the node at index */
	tmp = *head;
	i = 0;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	/* Return -1 if index out of range */
	if (tmp == NULL)
		return (-1);

	/* Update prev node's next pointer */
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;

	/* Update next node's prev pointer */
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	/* Free the node */
	free(tmp);

	return (1);
}
