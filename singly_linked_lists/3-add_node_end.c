#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	unsigned int len;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	/* Find the length of the string */
	len = 0;
	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;

	/* If list is empty, new node becomes the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Walk to the last node */
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	/* Point last node to new node */
	tmp->next = new;

	return (new);
}
