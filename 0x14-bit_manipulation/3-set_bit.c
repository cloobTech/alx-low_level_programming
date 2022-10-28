#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to the value to be updated
 * @index: index of the value;
 *
 * Return: (1) if successful, else (-1);
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n >> index;
	*n = *n | 1;
	*n = *n << index;
	return (1);
}
