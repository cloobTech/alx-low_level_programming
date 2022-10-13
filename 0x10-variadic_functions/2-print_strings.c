#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: operand to separate strings
 * @n: total number of expected argument.
 *
 * Return: Nothing.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(list, char *);
		if (temp == NULL)
			temp = ("nil");
		printf("%s", temp);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

