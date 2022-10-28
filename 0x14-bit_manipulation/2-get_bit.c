#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: value
 * @index: the index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* if the user tries to match a bit greater than the maximum bit (8*8)*/
	/* Note: unsigned long int takes (8bytes)*/
	if (index >= 64)
		return (-1);
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
