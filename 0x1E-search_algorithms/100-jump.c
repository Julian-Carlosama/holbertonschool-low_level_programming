#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that searches for a value in a sorted array
 *
 * @array: Array that contents elements to search.
 *
 * @size: Array size.
 *
 * @value: Value to search.
 *
 * Return: The vale to find.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, n = 0, ju = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (n = sqrt(size); index < size; index += n)
	{
		if (array[index] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", (index - n), index);
	return (-1);
}
