#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: destination buffer/address.
 * @b: item to be copied or src.
 * @n: number of bytes to be fiiled.
 *
 * Return: a pointer to the memory area of s.
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
