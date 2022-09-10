#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - Print digits 0 - 9 followed by a line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	do {
		putchar(a + '0');
		a++;
	} while (a < 10);

	putchar('\n');

	return (0);
}
