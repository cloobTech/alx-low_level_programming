#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: operand to be evaluated
 *
 * Return: a range from the operand to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}

	else if (n > 98)
	{
		do {
			printf("%d", n);
			if (n != 98)
			{	printf(", ");
			}

			n--;
		} while (n >= 98);
	}
	else
	{
		printf("%d", n);
	}

	printf("\n");
}
