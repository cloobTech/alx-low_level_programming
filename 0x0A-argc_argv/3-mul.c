#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 *
 * @argc: array count
 * @argv: array list
 *
 * Return: 0 zero for sucess else 1;
 */


int main(int argc, char *argv[])
{
	int i, sum;

	sum = 1;

	if (argc > 2)
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
