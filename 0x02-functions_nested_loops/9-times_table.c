#include "main.h"
#include "_putchar.c"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
int main(void)
{
    times_table();
    return (0);
}
void times_table()
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (c >= 9)
				continue;
			else
				_putchar(' ');

		
		}
	
		_putchar('\n');
	}
}
