#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: first parameter (concatenate string with the second parameter)
 * @str: second parameter
 *
 * Returns: a pointer to the resulting string dest
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
