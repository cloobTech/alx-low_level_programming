#include <stdlib.h>
#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination address
 * @src: source address
 * @n: number of bytes from src to dest
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 *
 * @ptr: previous dynmanically allocated memory
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: void pointer to new memory sized
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *c_ptr, *c_new_ptr;

	c_ptr = (char *)ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		new_ptr = malloc(new_size * sizeof(int));
	else
		new_ptr = malloc(new_size * sizeof(int));

	if (!new_ptr)
		return (ptr);

	c_new_ptr = (char *)new_ptr;
	_memcpy(c_new_ptr, c_ptr, new_size);
	return (new_ptr);
}
