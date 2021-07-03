#include "holberton.h"
/**
 * _strcmp - compares two strings.
 *
 * @s1: Is the one string to compare
 *
 * @s2: Is the second strin to compare
 *
 * Return: The compares between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, k = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (k == 0)
			k = s1[i] - s2[i];
		i++;
	}

	return (k);
}
