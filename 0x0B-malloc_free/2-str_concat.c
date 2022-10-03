#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated content of @s1 & @s2, (NULL) if test fails
 */


char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len, s1_len, s2_len, i;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	len = s1_len + s2_len;
	i = 0;

	concat_str = (char *) malloc((len * sizeof(*s1)) + 1);

	if (concat_str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (i < s1_len)
	{
		concat_str[i] = s1[i];
		i++;
	}

	i = 0;
	while (s1_len < len)
	{
		concat_str[s1_len] = s2[i];
		i++;
		s1_len++;
	}

	concat_str[len] = '\0';

	return (concat_str);
}
