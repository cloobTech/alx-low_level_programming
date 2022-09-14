#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: value to be evaluated
 *
 * Return: the last value
 */



int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		x = x * -1;
	_putchar('0' + x);

	return (x);
}
