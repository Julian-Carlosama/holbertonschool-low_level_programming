#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 *
 * @array: Input array
 *
 * @action: Pointer to the function
 *
 * @size: is the array size
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (array && action)
		while (count < size)
		{
			action(array[count]);
			count++;
		}
}
