#include "2-strlen.c"
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the beginning of a list_t list.
 *
 * @head: first node;
 * @str: string (node data)
 *
 * Return: the address of the new element, or NULL if it failed;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL || str == NULL)
	{
		free(head);
		return (NULL);
	}
	temp = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		free(head);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);

}
