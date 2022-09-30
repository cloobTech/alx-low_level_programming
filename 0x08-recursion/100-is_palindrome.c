#include "main.h"

/**
 * rev_recursion - prints a string in reverse.
 *
 * @s_rev: parameter
 * Return: rev
 */

char *rev_recursion(char *s_rev)
{
	if (*s_rev != '\0')
		rev_recursion(s_rev + 1);
	return (s_rev);
}


/**
 * palin_helper - compares two variablea to determine palindrome.
 *
 * @s1: First Operand
 *
 * Return: (1) for success else (0)
 */

int palin_helper(char *s1)
{
	char *s2;

	s2 = rev_recursion(s1);

	if (*s1 != *s2)
		return (0);
	if (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		rev_recursion(s1);
	}
	if (*s1 == '\0')
		return (1);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: parameter
 *
 * Return: value of palin_helper ( 1 || 0)
 */

int is_palindrome(char *s)
{
	return (palin_helper(s));
}
