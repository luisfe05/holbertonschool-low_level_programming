#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	/* Walk through each node freeing as we go */
	while (head != NULL)
	{
		/* Save next before freeing current node */
		tmp = head->next;

		/* Free the node */
		free(head);

		/* Move to the next node */
		head = tmp;
	}
}
