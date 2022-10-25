#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -  prints a listint_t linked list.
 *
 * @head: Pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node;

	node = 0;
	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		node++;
		if (head->next == NULL)
			exit(98);
	}

	return (node);

}
