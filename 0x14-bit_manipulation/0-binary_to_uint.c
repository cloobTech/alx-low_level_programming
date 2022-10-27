#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: A string of binary values
 *
 * Return: the converted decimal representation or (0) if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, total;
	int i, len;

	total = 0;
	decimal = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += decimal;
		decimal *= 2;
	}
	return (total);
}
