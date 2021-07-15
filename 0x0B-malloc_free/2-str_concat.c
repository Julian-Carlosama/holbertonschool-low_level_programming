#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string one
 *
 *@s2: string two
 *
 * Return: a pointer of strings
 */
char *str_concat(char *s1, char *s2)
{
	char *sto;
	unsigned int i, j, k, last;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	sto  = malloc(sizeof(char) * (i + j + 1));

	if (sto == NULL)
	{
		free(sto);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		sto[k] = s1[k];

	last = j;
	for (j = 0; j <= last; k++, j++)
		sto[k] = s2[j];

	return (sto);
}
