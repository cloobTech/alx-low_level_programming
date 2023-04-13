#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located <else> -1
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	right = 0;
	if (array == NULL)
		return (-1);
	if (array[right] == value)
		return (right);
	right = 1;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		right *= 2;
	}
	if (right >= size)
		right = size - 1;
	left = (right / 2) + 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (left <= right)
	{
		i = left;
		while (i <= right)
		{
			if (i == left)
				printf("Searching in array: ");
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		mid = ((left + right) / 2);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
