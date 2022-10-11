#include <stdlib.h>
#include "main.h"

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
	unsigned i;

/* no change  in size, previously allocated block stays the same */
	if (new_size == old_size)
		return (ptr);
/* Condition for realloc to act as free */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
/* Condition for malloc to act as malloc */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
/* Condition to reallocate previously allocated memory block */
	if (new_size > old_size && (ptr != NULL))
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (ptr);

		for (i = 0; i < old_size; i++)
/* Type casting done to enable dereferncing of void pointer*/
			*((char *)new_ptr + 1) = *((char *)ptr + 1);
		free(ptr);
	}
	return (new_ptr);
}
