#include "main.h"
#include <stdlib.h>

/**
 * _memset - a fuction that fiils an array with values.
 *
 * @s: memory to be filled
 * @min: min range
 * @max: max range
 *
 * Return: string output
 */

int *_memset(int *s, char min, int max)
{
	unsigned int i;

	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}

/**
 * array_range - creates an array of integers.
 *
 * @min: min range
 * @max: max range
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr_range, range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;

	arr_range = malloc(range * sizeof(int));

	if (!arr_range)
		return (NULL);

	_memset(arr_range, min, max);

	return (arr_range);

}
