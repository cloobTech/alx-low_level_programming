#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: pointer to head node
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
   const dlistint_t *current;
   size_t i;

    current = h;
    i = 0;
    while (current)
    {
        printf("%d\n", current->n);
        i++;
        current = current->next;
    }

    return (i);
}
