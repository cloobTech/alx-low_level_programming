#include "main.h"

/**
 * puts_half - print the second half of the string.
 * If the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length_of_the_string - 1) / 2
 *
 * @str: value to be evaluated
 */

void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{}

	if (i < 1)
	{
		_putchar('\n');
	}

	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;

	for (; n <= i; n++)
	{
		_putchar(str[n]);
		if (n == 0)
			_putchar('\n');

	}

}
