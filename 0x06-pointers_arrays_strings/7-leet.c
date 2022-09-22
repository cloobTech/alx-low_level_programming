#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char x1[] = "aAeEoOtTlL";
	char x2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == x1[j])
			{
				n[i] = x2[j];
			}
		}
	}
	return (n);
}
