#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 *
 * @x: first operand
 * @y: second operand
 *
 * Return:  returns the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{

	if (y < 1)
		return (1);
	y--;
	_pow_recursion(x, y);
	return (_pow_recursion(x, y) * x);
}
