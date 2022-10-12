#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: parameter to be passed
 * @f: function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
