#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located <else> -1
 */


int binary_search(int *array, size_t size, int value)
{
	/* left, right and middle indexes */
	size_t L, R, M, i;

	L = 0;
	R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		i = L;
		while (i <= R)
		{
			if (i == L)
				printf("Searching in array: ");
			if (i == R)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		M = ((L + R) / 2);

		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			R = M - 1;
		else
		{
			return (M);
		}
	}

	return (-1);
}
