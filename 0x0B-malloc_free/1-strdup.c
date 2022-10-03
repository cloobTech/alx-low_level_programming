#include "main.h"
#include <stdlib.h>


/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: initial copy to be duplicated
 *
 * Return: NULL if str = NULL || insufficient space
 * On success, the return a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	i = 0;
	len = sizeof(str);
	dup_str = (char *) malloc(sizeof(str));

	if (dup_str == 0)
		return (NULL);
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}

	return (dup_str);
}
