#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: Is a string
 *
 * Return: A pointer of array
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;

	st = (char *)malloc(sizeof(char) * (i + 1));

	if (st == NULL)
		return (NULL);

	while (j < i)
	{
		st[j] = str[j];
		j++;
	}
	return (st);
}
