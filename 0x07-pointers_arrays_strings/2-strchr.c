#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: Is the pointer to process
 *
 * @c: Is the character to localize
 *
 * Return: If have coincidence or not
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	i++;
	return (NULL);
}
