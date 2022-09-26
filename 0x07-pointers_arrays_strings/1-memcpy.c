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
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
