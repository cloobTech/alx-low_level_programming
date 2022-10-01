#include "main.h"


/**
 * _memset - that fills memory with a constant byte.
 *
 * @s: bytes of the memory area pointed to by s
 * @b: constant byte
 * @n: number of bytes to be prefilled
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
