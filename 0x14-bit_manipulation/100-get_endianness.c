#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *c;
	int k;

	k = 7;
	c = (char *)(&k);

	if (c)
		return (1);
	else
		return (0);

}
