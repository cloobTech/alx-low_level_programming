#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc.
 *
 * @b: parameter
 *
 * Return: a pointer to the allocated memory or process termination
 * with a status value of 98.
 */


void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
