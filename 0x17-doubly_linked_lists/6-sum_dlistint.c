#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: head pointer
 *
 * Return: sum of data(n)
 */


int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
