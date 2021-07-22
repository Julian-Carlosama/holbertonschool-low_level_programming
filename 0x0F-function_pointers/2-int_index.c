#include "function_pointers.h"

/*
 * int_index - searches for an integer.
 *
 * @array: input integers
 *
 * @size: Size of array
 *
 * @cmp: pointer to function to be used to compare values
 *
 * Return:returns the index of the first element
 * for which the cmp function does not return 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	if ((array != NULL) && (cmp != NULL) && (size != 0))
	{
		int count = 0, aux;

		while (count < size)
		{
			count++;
			aux = cmp(array[count]);
			if (aux == 1)
				return (count);
		}
		if (aux == 0)
			return (-1);
	}
	return (-1);
}
