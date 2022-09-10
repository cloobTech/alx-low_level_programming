#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - Print alphabet a-z (lowercase)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
