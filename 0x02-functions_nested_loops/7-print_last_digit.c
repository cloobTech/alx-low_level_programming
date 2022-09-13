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
		return (n);
	}
	else
	{
		n = (n * -1) % 10;
		return (n);
	}
}
