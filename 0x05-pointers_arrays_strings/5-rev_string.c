#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 *
 * @s: operand to be evaluated
 */

void rev_string(char *s)
{

	int len, i;

	for (len = 0; s[len] != '\0'; len++)
	{}

	len = len - 1;

	for (i = 0; len >= i; len--)
	{
		_putchar(s[len]);
	}

}
