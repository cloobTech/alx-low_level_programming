#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: parameter to be evaulauted
 *
 * Return: the length of a string (@s).
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return(	_strlen_recursion(s) + 1);
}
