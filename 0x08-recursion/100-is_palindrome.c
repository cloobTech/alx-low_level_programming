#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *r;
    r = rev_recursion("jevel");
    printf("%s\n", r);
    /**r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);*/
    return (0);
}
/**
 * rev_recursion - prints a string in reverse.
 *
 * @s_rev: parameter
 * Return: rev
 */

char *rev_recursion(char *s_rev)
{
	char *tmp;

	if (*s_rev != '\0')
	:	rev_recursion(s_rev + 1);
	tmp
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
		palin_helper(s2);
	}
	if (*s1 == '\0')
		return (1);
	return (palin_helper(s1));
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
