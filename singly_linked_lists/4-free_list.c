#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	/* Walk through each node freeing as we go */
	while (head != NULL)
	{
		/* Save next before freeing current node */
		tmp = head->next;

		/* Free the string then the node */
		free(head->str);
		free(head);

		/* Move to the next node */
		head = tmp;
	}
}
