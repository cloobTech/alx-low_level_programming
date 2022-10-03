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

	if (str == NULL)
		return (NULL);
	i = 0;
	len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	while (i < len)
	{
		str--;
		i++;
	}

	dup_str = (char *) malloc((len * sizeof(*str)) + 1);
	i = 0;


	if (dup_str == NULL)
		return (NULL);
	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}

	return (dup_str);
}
