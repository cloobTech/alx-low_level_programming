#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: first parameter (concatenate string with the second parameter)
 * @src: second parameter
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int len, i;

	/**
	 * _strlen - gets the lenght of a string
	 */

	len = _strlen(dest);

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
