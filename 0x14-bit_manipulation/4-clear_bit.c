#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to the value to be updated
 * @index: index of the value;
 *
 * Return: (1) if successful, else (-1);
 */


int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	*n = *n >> index;
	if (*n & 1)
		*n = *n ^ 1;
	*n = *n << index;
	return (1);
}
