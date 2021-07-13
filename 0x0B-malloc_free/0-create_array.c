#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * @size: Array size
 *
 * @c: char stored
 *
 * Return: the array pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
