#include "main.h"

/**
 * print_triangle - draws a triangle line on the terminal
 *
 * @size: operand
 *
 * Return: @size number triangle lines.
 */

void print_triangle(int size)
{

	int i, ii, iii;

	for (i = size; i >= 1; i--)

	{
		for (ii = 1; ii < i; ii++)
		{
			_putchar(' ');
		}

		for (iii = size; iii >= i; iii--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
