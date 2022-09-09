#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 99; digit1++)
		for (digit2 = digit1 + 1; digit2 < 100; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}

	putchar('\n');

	return (0);
}
