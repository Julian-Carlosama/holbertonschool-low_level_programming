#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked: function that allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p == malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
