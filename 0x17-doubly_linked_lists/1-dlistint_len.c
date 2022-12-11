#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - the lenght of a dlistint_t list.
 *
 * @h: pointer to head node
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;

	current = h;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}

	return (i);
}
