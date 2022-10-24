#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 *
 * @head: pointer to the head node;
 *
 * Return:  returns the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
