#include "main.h"
#include <stdlib.h>

/**
 * _memset - is a function that copies char
 * @s: memory to be filled
 * @b: input to be copied
 * @n: bytes to be copied
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

int *array_range(int min, int max)
{
	int *arr_range, range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;

	arr_range = malloc(range * sizeof(int));

	if (!arr_range)
		return (NULL);

	_memset(arr_range,min,max);

	return (arr_range);

}
