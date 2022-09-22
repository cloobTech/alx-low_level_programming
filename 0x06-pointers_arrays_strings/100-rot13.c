#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @n: parameter to be encoded
 *
 * Return: enconded character
 */

char *rot13(char *n)
{
	int i, j;

	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char boolen;

	for (i = 0; n[i] != '\0'; i++)
	{
		boolen = 0;

		for (j = 0; b[j] != '\0' && boolen == 0; j++)
		{
			if (n[i] == b[j])
			{
				n[i] = a[j];
				boolen = 1
			}

		}
	}

	return (n)
}
