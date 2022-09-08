#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char achar;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %d byte(s)\n", sizeof(achar));
	printf("Size of an int: %d byte(s)\n", sizeof(ainteger));
	printf("Size of a long int: %d byte(s)\n", sizeof(along));
	printf("Size of a long long int: %d byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %d byte(s)\n", sizeof(afloat));

	return (0);
}
