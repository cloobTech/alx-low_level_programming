#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * @head: pointer to head node
 * @idx: the index position we want to insert the new node
 * @n: new node value
 *
 * Return: the address of the new node, or NULL if it failed;
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i, nodes;

	tmp = *head;
	i = 0;
	nodes = 0;

	if (head == NULL)
		return (NULL);

	while (tmp)
	{
		tmp = tmp->next;
		nodes++;
	}
	/* get total nodes and check if idx is < nodes */
	if (idx >= nodes)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	/* move a temporary pointer to the index pos */
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
