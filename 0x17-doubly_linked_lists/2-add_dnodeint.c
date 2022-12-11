#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - dlistint_t *add_dnodeint(dlistint_t **head, const int n);
 *
 * @head: address of the head pointer;
 * @n: data to be added;
 *
 * Return: address of new node;
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		free(head);
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		free(head);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
