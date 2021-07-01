#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copy the string src to dest
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * Return: String destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
