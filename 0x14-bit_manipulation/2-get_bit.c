#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: arguments.
 *
 * @index: arguments.
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int srch = 0x01;

	srch <<= index;
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	if ((n & srch))
		return (1);
	else
		return (0);
}
