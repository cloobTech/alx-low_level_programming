#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - work exactly like strncpy
 * (copies a string from one paramater to another)
 *
 * @dest: first parameter (empty string that receivces the copy)
 * @src: second parameter (initial string that sends the copy)
 * @n: number of bytes
 *
 * Return: the copied string into @dest address.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int len, i;

	/**
	 * _strlen - gets the lenght of a string
	 */

	for (i = 0; (src[i] != '\0') && (i < n); i++)
	{
		dest[i] = src[i];
	}

	len = _strlen(dest);

	if (dest[len] != '\0')
		dest[len] = '\0';

	/**
	 * if In a case where the length of src is less than that of n, the
	 * remainder of dest will be padded with null bytes.
	 */

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
