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

	int i, ii;

	for (i = 1; i <= n; i++)

	{
		for (ii = 1; ii < i; ii++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	if (n > 1)
		putchar('\n');
}
