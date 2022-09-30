#include "main.h"
#include <stdio.h>

/**
 * prime_helper - helper function to determine prime
 *
 * @i: first operand
 * @j: second operand (divisor)
 *
 * Return: prime num
 */

int prime_helper(int i, int j)
{

	if (i < 2)
		return (0);
	if (i % j == 0 && (i != j))
		return (0);
	if (i % j == 0 && j > (i / 2))
		return (1);
	return (prime_helper(i, j + 1));

}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: operand
 *
 * Return: 1 success otherwise 0
 */

int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
