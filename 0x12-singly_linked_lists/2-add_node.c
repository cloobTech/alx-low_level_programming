#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of a list_t list.
 *
 * @head: first node;
 * @str: string (node data)
 *
 * Return: the address of the new element, or NULL if it failed;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);

}
