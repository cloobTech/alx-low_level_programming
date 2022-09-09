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
		printf("%d", a);
		a++;
	} while (a < 10);

	printf("\n");

	return (0);
}
