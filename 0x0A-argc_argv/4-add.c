#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers.
 *
 * @argc: array counter
 * @argv: array content
 *
 * Return: sum of integers in @argv
 */


int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] == 48)
				continue;
			if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
