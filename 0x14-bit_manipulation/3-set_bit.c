#include "main.h"

/**
 * set_bit - that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: Pointer to unsigned
 *
 * @index: Index is the index, starting from 0
 * of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number;

	if (index > 63)
		return (-1);

	number = 1 << index;
	*n = (*n | number);

	return (1);
}
