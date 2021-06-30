#include "holberton.h"
/**
 * print_rev - Return a string in reverse
 *
 * @s: Is a string to process
 *
 * Return: No return
 */
void print_rev(char *s)
{
	int i = 0;

	int j;

	while ('\0' != s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar(10);
}
