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
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}

	else
	{
		n = -n;
		_putchar(n + '0');
		return (n);
	}
}
