#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_all - prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;
	char *separator, *string;

	va_start(list, format);
	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(list);
	printf("\n");
}
