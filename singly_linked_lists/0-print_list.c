#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	/* Walk through each node until we reach NULL */
	while (h != NULL)
	{
		/* Print (nil) if str is NULL, otherwise print the string */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
