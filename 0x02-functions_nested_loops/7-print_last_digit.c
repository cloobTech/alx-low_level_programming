#include "main.h"
#include "_putchar.c"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: value to be evaluated
 *
 * Return: the last value
 */


int main(){
int r;
r = print_last_digit(-2147483648);
putchar(r + '0');
}

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = (-n) % 10;

		_putchar(n + '0');
		return (n);
	}
}
