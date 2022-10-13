#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: number of arguments expected
 * @...: variadic parameters
 *
 * Return: returns the sum of all its parameters || 0 if n == 0;
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	{
		va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
			sum += va_arg(list, int);

		va_end(list);
	}

	return (sum);

}
