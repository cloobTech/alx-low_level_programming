#include "main.h"

/**
 * _isalpha - check that an input is an alphabet
 *
 * @c: The argument to be evaluated
 *
 * Return: 1 if c is an alphabet else 0
 *
 */


int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
