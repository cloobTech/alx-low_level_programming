#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - Base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;
	char alpha;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
