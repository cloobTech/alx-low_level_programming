#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to head node
 * @idx: index at which we want to insert the link
 * @n: the data we want to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	size_t i, len;

	if (h == NULL)
		return (NULL);
	temp = *h;
	len = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (temp == NULL || (idx == len))
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (temp)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
