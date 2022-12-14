#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the head node
 * @index: the index of a node
 *
 * Return: return the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len;
	listint_t *tmp;

	tmp = head;
	i = 0;
	len = 0;

	while (tmp)
	{
	tmp = tmp->next;
	len++;
	}

	tmp = head;

	if (index >= len)
		return (NULL);

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
