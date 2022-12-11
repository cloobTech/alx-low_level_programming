#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to the head node
 * @index: is the index of the node to be returned
 *
 * Return: the nth node of a dlistint_t linked list or NULL if it doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	i = 0;
	temp = head;
	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}

	return (NULL);
}
