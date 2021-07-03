#include <stdio.h>

/**
 * _strncat - Concatenate two strings
 *
 * @src: string source
 *
 * @dest: String Destination
 *
 * @n: Numbres to bytes for src
 *
 * Return: The pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
