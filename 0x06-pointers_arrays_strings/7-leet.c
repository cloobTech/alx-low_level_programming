#include "main.h"
#include "encode.c"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 *
 * @str: string to be encoded
 *
 * Return: encoded string
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
char *leet(char *str)
{
	int i, len;
	char *code[] = {"a", "A", "e", "E", "o", "O", "l", "L", "t", "T"};

	len = sizeof(code) / sizeof(code[0]);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (; (len--) >= 0; len--)
		{
			if ((str[i]) == code[len])
			//	printf("%d", encode(code[len]));
				printf("spotted ");
		}
	}
	return (str);
}
