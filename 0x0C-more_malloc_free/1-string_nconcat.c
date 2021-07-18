#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: Second string
 *
 * @n: bytes in total
 *
 * Return: is malloc fail value is 98, else the pointer allocate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int ls1, ls2, lout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lout = ls1 + n;

	out = malloc(lout + 1);

	if (out == NULL)
		return (NULL);

	for (i = 0; i < lout; i++)
		if (i < ls1)
			out[i] = s1[i];
		else
			out[i] = s2[i - ls1];

	out[i] = '\0';

	return (out);
}
