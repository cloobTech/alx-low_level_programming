#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first operand
 * @s2: second operand
 *
 * Return: 0 if s1 == s2 else 15 or -15 when an equal check is met..
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
