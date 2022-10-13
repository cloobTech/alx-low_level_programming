#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @separator: parameter.
 * @n: total number of expected argument.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
		return;

	if (n > 0)
	{
		va_list list;

		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}