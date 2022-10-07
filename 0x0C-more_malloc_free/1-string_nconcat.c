#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"

/**
 * string_nconcat - concatenates two strings. only crop @n number of bytes
 * of @s2.
 *
 * @s1: first string
 * @s2: second string
 * @n: n number of bytes of second string
 *
 * Return: pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated .If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len, s1_len, s2_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n >= s2_len)
		s2_len = s2_len;
	else
		s2_len = n;

	len = s1_len + s2_len;
	i = 0;
	  /* allocate dynamic memory using the string len*/
	concat_str = (char *) malloc((len * sizeof(*s1)) + 1);
	if (concat_str == NULL)
		return (NULL);
	while (i < s1_len)
	{
		concat_str[i] = s1[i];
		i++;
	}
	i = 0;
	/* concatenante from the last stop of S1;*/
	while (s1_len < len)
	{
		concat_str[s1_len] = s2[i];
		i++;
		s1_len++;
	}
	concat_str[len] = '\0';
	return (concat_str);
}
