#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of members/elements in an array
 * @size: size of bytes to be allocated to each element.
 *
 * Return: dynamically allocated memory or NULL if memory fails.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call_mem;

	if (!nmemb || !size)
		return (NULL);
	call_mem = malloc((nmemb * size) + 1);
	if (!call_mem)
		return (NULL);
	return (call_mem);

}
