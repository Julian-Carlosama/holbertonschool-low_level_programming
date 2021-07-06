#include "holberton.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: Memory area destiantion
 *
 * @src: Source memory area
 *
 * @n: Numbers of byte to copy
 *
 * Return: Show the pointer update
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
