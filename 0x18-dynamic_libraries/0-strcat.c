#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: first parameter (concatenate string with the second parameter)
 * @src: second parameter
 *
 * Return: a pointer to the resulting string dest
 */


char *_strcat(char *dest, char *src)
{

	int len, i;

	/**
	 * _strlen - gets the lenght of a string
	 */

	len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
