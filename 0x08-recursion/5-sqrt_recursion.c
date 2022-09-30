#include "main.h"

/**
 * _check_root - helper function
 * @i: operand
 * @j: 2nd operand
 * Return: root @j;
 */

int _check_root(int i, int j)
{
	if (i == j * j)
		return (j);
	else if (i <  j * j)
		return (-1);
	return (_check_root(i, j + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: operand
 *
 * Return: return natural square root else (-1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_check_root(n, 0));

}
