#include "search_algos.h"

/**
  * linear_search - Lineal search function.
  *
  * @array: Array that contents elements to search.
  *
  * @size: Array size.
  *
  * @value: Value to search.
  *
  * Return: The vale to find.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%li] = [%i] \n", index, array[index]);

		if (array[index] == value)
			return (index);

	index++;
	}
	return (-1);
}
