#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t;
 *
 * @head: pointer to the head node;
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = NULL;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
