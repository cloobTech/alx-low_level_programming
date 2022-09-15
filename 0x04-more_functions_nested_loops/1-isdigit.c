#include "main.h"

/**
 * _isdigit - check for a digit (0 - 9)
 *
 * @c: operand to be evaluated
 *
 * Return: 1 if c is a digit else 0
 */

int _isupper(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
