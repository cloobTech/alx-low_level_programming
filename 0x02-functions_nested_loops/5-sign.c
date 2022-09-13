#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * @n: argument to be evaluated
 *
 * Return: 1 if number is positive
 * return -1 for negative number else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
