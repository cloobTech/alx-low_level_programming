#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: array is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: first index where value is located <else> -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;

	start = 0;
	end = 0;
	jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (end < size && array[end] < value)
	{
		start = end;
		end += jump;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	if (end >= size)
		end = size - 1;
	while (start <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
