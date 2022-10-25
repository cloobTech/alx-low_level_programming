#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: pointer to head node;
 * @index: the index of the node we want to delete
 *
 * Return: 1 if success, else -1;
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i, nodes;

	tmp = *head;
	i = 0;
	nodes = 0;

	if (head == NULL)
		return (-1);

	/* get total nodes and check if idx is < nodes */
	while (tmp)
	{
		tmp = tmp->next;
		nodes++;
	}
	/* check if index is greater than total node */
	if (index >= nodes)
		return (-1);
	/* move a temporary pointer to the index pos */
	tmp = *head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	printf("----> %d\n", tmp->n);
	return (1);
}
