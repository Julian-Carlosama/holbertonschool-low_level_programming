#include "search_algos.h"

/**
  * int linear_search - Lineal search function.
  *
  * @array: Array that contents elements to search.
  *
  * @size: Array size.
  *
  * @value: Value to search.
  *
  * Retrun: The vale to find.
  */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	while (index < (int)size)
	{
		printf("Value checked array[%i] = [%i] \n", index, array[index]);

		if (array[index] == value)
			return (index);

	index++;
	}
	return (-1);
}
