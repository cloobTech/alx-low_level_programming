#include <stdio.h>

/**
 * main - Entry Point
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
