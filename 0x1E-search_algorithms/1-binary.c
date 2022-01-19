#include "search_algos.h"

/**
  * binary_search - Binary search function.
  *
  * @array: Array that contents elements to search.
  *
  * @size: Array size.
  *
  * @value: Value to search.
  *
  * Return: The vale to find.
  */
int binary_search(int *array, size_t size, int value)
{
	int index = 0;
	int medio = 0;
	int left = 0;
	int right = (int)size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");

		index = left;
		for (; index < right; index++)
			printf("%d, ", array[index]);

		printf("%d\n", array[index]);

		medio = (left + right) / 2; /*Set the middle of the array*/

		if (array[medio] == value)
			return (medio);

		else if (array[medio] > value)

			right = medio - 1;

		else
			left = medio + 1;
	}
	return (-1);
}
