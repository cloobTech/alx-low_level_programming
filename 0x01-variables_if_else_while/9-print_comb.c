#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit == 9)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
