#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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

	/* Point new node to current head and update head */
	new->next = *head;
	*head = new;

	return (new);
}
