#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list;
 *
 * @head: pointer to the first node
 * @n: value of the new node to be created
 *
 * Return: pointer to the new node created
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		tmp = *head;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);

}
