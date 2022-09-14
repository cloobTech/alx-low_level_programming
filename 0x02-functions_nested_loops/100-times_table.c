#include "main.h"
#include "_putchar.c"

/**
 * print_times_table -  prints the n times table, starting with 0.
 *
 * @n: value to be evaluated
 *
 * Return: null is @n is greater than 15 and less than 0
 */

int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);
    return (0);
}

void print_times_table(int n)
{


	
	if (n > 15 || n < 0)
	{
	_putchar('h');
	}

	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (b = 1; b <= n; b++)
		{
			if (b <= n)
			{
				_putchar(',');
				_putchar(' ');
			}
			c = a * b;
			if (c <= n)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}