#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: operand
 *
 * Return: @n number of lines.
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
			_putchar(95);

	}
		_putchar('\n');
}
