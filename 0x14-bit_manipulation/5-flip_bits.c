#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: first operand
 * @m: second operand
 *
 * Return: returns bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	while (m | n)
	{
		if ((n & 1) != (m & 1))
			i++;
		m >>= 1;
		n >>= 1;
	}

	return (i);
}
