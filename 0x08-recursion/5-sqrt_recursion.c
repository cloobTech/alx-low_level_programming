#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: operand
 *
 * Return: return natural square root else (-1)
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
 * _check_root - helper function
 * @k: operand
 * Return: root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_check_root(n, 0);

}
