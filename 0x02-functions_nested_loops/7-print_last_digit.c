#include "main.h"
#include "_putchar.c"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: value to be evaluated
 *
 * Return: the last value
 */



int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');

	return (0);
}
