#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  a function that frees a list_t list;
 *
 * @head: node head;
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{

	while (head)
	{
		free(head->next);
		free(head->str);
		free(head);
	}

}
