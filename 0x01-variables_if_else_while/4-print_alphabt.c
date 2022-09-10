#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - print alphabets a - z followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		else
			putchar(a);
	}

	putchar('\n');

	return (0);
}
