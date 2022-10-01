#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 *
 * @argc: array counter
 * @argv: array content
 *
 * Return: Always (0) Success;
 */

int main(int argc, char *argv[])
{
	int change;
	int coin[] = {1, 2, 5, 10, 25};


	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
		
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
