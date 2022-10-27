#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: value to be evaluated
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	binary_helper(n);
}

/**
 * binary_helper - prints binary
 * @n: value to be evakuated
 */

void binary_helper(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar(n % 2 + '0');
}
