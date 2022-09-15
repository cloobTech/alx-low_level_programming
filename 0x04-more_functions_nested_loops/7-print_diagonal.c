#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: operand
 *
 * Return: @n number diagonal lines.
 */

void print_diagonal(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar(92);

	}
		_putchar('\n');
}
