#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: operand to be evaluated.
 *
 * Return: length of string (int).
 *
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}

	return (len);

}
