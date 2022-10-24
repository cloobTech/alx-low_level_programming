#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to the first node
 *
 * Return: lenght of node
 */

size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
		return (node);

	while (h)
	{
	h = h->next;
	node++;
	}

	return (node);

}
