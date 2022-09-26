#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: initial string
 * @accept: string to be evaluated
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
	       	{
			if (*s == *accept)
				return (s);
		}
		s++;
	}

	return (NULL);

}
