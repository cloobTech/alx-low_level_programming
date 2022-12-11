#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to head node;
 * @n: data to be added;
 *
 * Return: address of new node or 'NULL' if it fails;
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
	}

	current = *head;
	while (current->next)
		current = current->next;

	current->next = new;
	new->n = n;
	new->prev = current;
	new->next = NULL;

	return (new);
}
