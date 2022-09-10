#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - Print lowercase alphabet in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);

	putchar('\n');

	return (0);
}
