#include "main.h"
#include "2-strlen.c"

/**
 * _strstr -  locates a substring.
 *
 * @haystack: string to be searched
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	len = _strlen(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (needle[j] != haystack[i + j])
				break;
		if (j == len)
		{
			return (&haystack[i]);
		}
	}
	return (&haystack[i]);
}
