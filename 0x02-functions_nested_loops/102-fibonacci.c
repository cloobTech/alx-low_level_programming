#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int ii;

	printf("%lu, %lu, ", n1, n2);
	for (ii = 2; ii < nLast; ii++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (ii != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
