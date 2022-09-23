#include "main.h"

/**
 * print_number - that prints an integer.
 *
 * @n: value to be evaluated
 */

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
	putchar('-');
	k = -n;
	}
	else
		k = n;


	if (k >= 10)
	{
		print_number(k / 10);

	}

	putchar((k % 10) + '0');
}

