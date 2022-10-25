#include "lists.h"

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
	listint_t *tmp, *next_node;
	unsigned int i, nodes;

	tmp = *head;
	i = 1;
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
	if (index == 0)
	{
		*head = *head->next;
		free(tmp);
	}
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	next_node = tmp->next;
	tmp->next = next_node->next;
	free(tmp);
	return (1);
}
