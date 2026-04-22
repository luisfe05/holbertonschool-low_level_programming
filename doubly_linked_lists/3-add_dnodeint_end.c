#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Set value and pointers */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* If list is empty new node becomes the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Walk to the last node */
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	/* Link new node to the end */
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
