#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node;
 * @n: data to be added to new node
 *
 * Return: pointer to new node created;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
