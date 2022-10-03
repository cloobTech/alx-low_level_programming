#include "main.h"
#include <stdlib.h>

/**
  * create_array -  creates an array of chars, and initializes it
  * with a specific char.
  *
  * @size: size of array
  * @c: character to prefill the array
  *
  * Return: a pointer to the array, or NULL if it fails or NULL if size = 0.
  */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	/**
	  *allocate dynamic size to pointer (ptr);
	  */
	ptr = (char *) malloc(size * sizeof(c));
	i = 0;

	if (ptr == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}



