#include "main.h"

/**
 * _islower - returns digit to signify if a character is lower case
 *
 * @c: The argument to be evaluated
 *
 * Return: 1 if c is a lower case alphabet else 0
 *
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);

}
