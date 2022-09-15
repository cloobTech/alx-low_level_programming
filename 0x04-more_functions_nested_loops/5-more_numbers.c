#include "main.h"

/**
 * prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 */


void more_numbers(void)
{
	int i, ii;

	for (i = 0; i <= 10; i++)
		for (ii = 0; i <= 14; i++)
		{
			if (ii >= 10)
			{
				_putchar((ii / 10) + '0');
			}

				_putchar((ii % 10) + '0');
		}

		_putchar('\n');
}
