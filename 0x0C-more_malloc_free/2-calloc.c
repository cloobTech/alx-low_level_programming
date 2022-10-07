#include "main.h"
#include <stdlib.h>

/**
 * _memset - is a function that copies char
 * @s: memory to be filled
 * @b: input to be copied
 * @n: bytes to be copied
 * Return: string output
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


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
	call_mem = malloc(nmemb * size);
	if (!call_mem)
		return (NULL);

/* We used the _memset function to initialze the memory spaces to zero */
	_memset(call_mem, 0, (nmemb * size));
	return (call_mem);

}
