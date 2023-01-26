#include "lists.h"

/**
 * list_len - Finds the number of index in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of index in h.
 */

size_t list_len(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}

	return (index);
}
