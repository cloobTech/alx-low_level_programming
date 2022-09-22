#include "main.h"

/**
 * encode - encode some characters to digits
 * @n: parameter to be encoded
 * Return: encoded digits pending on the character passed
 */
int encode(char *n)
{


	if ( 'a' ||  'A')
		return (4);
	if ( 'e' ||  'E')
		return   (3);
	if ( 'o' ||  'O')
		return   (0);
	if ( 't' ||  'T')
		return   (7);
	if ( 'l' ||  'L')
		return   (1);

}
