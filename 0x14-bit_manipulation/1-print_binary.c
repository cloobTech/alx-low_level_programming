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
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 0)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
