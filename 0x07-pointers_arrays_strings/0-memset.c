#include "holberton.h"
/**
 * _memset -  fills memory with a constant byte.
 *
 * @s: Is the pointer to process
 *
 * @b: Is the number to bytes
 *
 * @n: Is the constant
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
