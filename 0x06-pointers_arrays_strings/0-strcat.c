#include "holberton.h"
/**
 * _strcat - Concatenate two strings
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * Return: the string dest update
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}
	for (j = dest[i]; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
