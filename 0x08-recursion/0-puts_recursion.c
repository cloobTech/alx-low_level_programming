#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: character to be evaluated
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
