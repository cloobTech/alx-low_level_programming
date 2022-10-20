#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: node instance
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
