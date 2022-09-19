#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: operand to be evaluated
 */

void print_rev(char *s)
{

	int len, i;

	for (len = 0; s[len] != '\0'; len++)
	{}

	len = len - 1;

	for (i = 0; len >= i; len--)
	{
		putchar(s[len]);
	}

	putchar('\n');
}

