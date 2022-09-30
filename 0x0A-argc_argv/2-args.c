#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: number of arguments in an array
 * @argv: list of arguments in an array
 *
 * Return: (0) success;
 */

int main(int argc, char *argv[])
{

	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
