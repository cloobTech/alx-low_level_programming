#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - Get all possible combination of non-reocccuring 3 digits
 *
 * Only the lowest combination should be printed out
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
		for (digit2 = 0; digit2 <= 9; digit2++)
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				if (digit3 <= digit2 || digit1 == digit3 || digit2 <= digit1)
					continue;
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}

	putchar('\n');

	return (0);
}
