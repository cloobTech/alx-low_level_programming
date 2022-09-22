#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be operated on
 * Return: operated @str
 */

char *cap_string(char *str)
{
	int i, ii, len;

	char seperators[] = {9, 10, 32, 44, 46, 59, 33, 34, 63, 40, 41, 123, 125};

	len = sizeof(seperators) / sizeof(seperators[0]);

	/**
	 * check if the first string is a character
	 * if yes, make it uppercase
	 *
	 */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;


	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < len; ii++)
		{
			if (seperators[ii] == str[i])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
		}
	}

	return (str);
}
