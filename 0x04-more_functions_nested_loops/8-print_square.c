#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: size of square
 *
 */

void print_square(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}
