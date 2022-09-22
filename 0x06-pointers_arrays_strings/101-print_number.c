#include "main.h"

/**
 * print_number - that prints an integer.
 *
 * @n: value to be evaluated
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}


	if (n >= 10)
	{
		print_number(n / 10);

	}

	_putchar((n % 10) + '0');
}
