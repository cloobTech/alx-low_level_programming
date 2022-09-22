#include "main.h"

/**
 * reverse_array - reverse the content of an array
 *
 * @a: an array of integers
 * @n: number of elements to be swaped
 */

void reverse_array(int *a, int n)
{
	/**
	 * temp: temporary copy of the initial array
	 */
	int *temp, i, size;

	temp = a;
	n = n - 1;
	size = n;

	for (i = 0; i <= size; i++)
	{
		a[i] = temp[n];
		n--;
	}
}
