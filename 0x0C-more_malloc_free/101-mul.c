#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two positive numbers.
 *
 * @argc: number of command line arguements
 * @argv: list of command line argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 1;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					exit(98);
				}
			}
			sum = sum * atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
